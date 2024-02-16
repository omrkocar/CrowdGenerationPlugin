// Fill out your copyright notice in the Description page of Project Settings.


#include "SProceduralGeneration.h"

#include "NavigationSystem.h"
#include "SCharacter.h"
#include "SGroup.h"
#include "SGroupComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

void ASProceduralGeneration::BeginPlay()
{
	Super::BeginPlay();

	if (bGenerateAtRuntime && SpawnedCharacters.Num() == 0)
	{
		GenerateMap();
	}
}

bool ASProceduralGeneration::SetupPrerequisites()
{
	World = GetWorld();
	if (!World.IsValid())
	{
#if WITH_EDITOR
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Tried to generate the map but World is null. Investigate!"));
#endif
		return false;
	}
	
	NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World.Get());
	if (!NavSys.IsValid())
	{
#if WITH_EDITOR
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Tried to generate the map but Navigation System is null. Investigate!"));
#endif
		return false;
	}

	ClearMap();
	return true;
}

void ASProceduralGeneration::GenerateMap()
{
	if (!SetupPrerequisites())
		return;
	
	GenerateMapInternal();
}

void ASProceduralGeneration::ClearMap()
{
	SpawnedCharacters.Empty();
	for (const auto& Actor : SpawnedActors)
	{
		GetWorld()->DestroyActor(Actor);
		if (ASGroup* Group = Cast<ASGroup>(Actor))
			Group->Cleanup();
			
	}
	SpawnedActors.Empty();
}

void ASProceduralGeneration::GenerateMapInternal()
{
	if (!NavSys.IsValid())
		return;

	SeedCounter = 0;
	
	SpawnParams.Owner = this;
	SpawnParams.SpawnCollisionHandlingOverride = SpawnCollisionHandleMethod;
	
	SpawnIndividualCharacters();
	SpawnGroups();
}

void ASProceduralGeneration::SetCharacterData(ASCharacter* Character, const FASCharacterData& Data, int SeedModifier) const
{
	Character->SetData(Data, SeedModifier);
}

bool ASProceduralGeneration::IsCollidingWithAnotherActor(AActor* Actor)
{
	for (const auto& Character : SpawnedCharacters)
	{
		if (FVector::Distance(Actor->GetActorLocation(), Character->GetActorLocation()) < 50.0f)
			return true;
	}
	
	return false;
}

void ASProceduralGeneration::TrackActor(AActor* actor, bool isCharacter)
{
	SpawnedActors.Add(actor);
	if (isCharacter)
		SpawnedCharacters.Add(actor);
}

FVector ASProceduralGeneration::GetRandomGroupMemberLocation(const AActor& Leader, int32 i) const
{
	FVector LeaderLocation = Leader.GetActorLocation();
	FVector LeaderForwardVector = Leader.GetActorForwardVector();
	FVector LeaderRightVector = Leader.GetActorRightVector();
	FVector StartPosition = Leader.GetActorLocation() - LeaderForwardVector * 200.0f;
	FVector Offset = LeaderRightVector * (i * 100.0f);
	return StartPosition + Offset;
}

void ASProceduralGeneration::SpawnIndividualCharacters()
{
	for (const auto& Data : IndividualGenerationData)
	{
		for (int i = 0; i < Data.Amount; i++)
		{
			FVector Location;
			if (!GetRandomPoint(Location))
				continue;
			
			FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);
			Spawn(Data.CharacterType, Location, SpawnRotation, Data.CharacterData, true);
		}
	}
}

ASCharacter* ASProceduralGeneration::Spawn(const TSubclassOf<ASCharacter>& Type, const FVector& Position, const FRotator& Rotation, const FASCharacterData& CharacterData, bool IsCharacter)
{
	FTransform Transform;
	Transform.SetLocation(Position);
	Transform.SetRotation(Rotation.Quaternion());
	
	ASCharacter* Individual = Cast<ASCharacter>(World->SpawnActorDeferred<ASCharacter>(Type, Transform, this, nullptr, SpawnCollisionHandlingMethod));
	if (Individual)
	{
		TrackActor(Individual, IsCharacter);
		if (IsCharacter)
			SetCharacterData(Individual, CharacterData, SpawnedCharacters.Num() - 1);

		UGameplayStatics::FinishSpawningActor(Individual, Transform);
	}

	return Individual;
}

void ASProceduralGeneration::SpawnGroups()
{
	for (const auto& Data : GroupGenerationData)
	{
		for (int i = 0; i < Data.Amount; i++)
		{
			FVector LeaderLocation;
			if (!GetRandomPoint(LeaderLocation))
				continue;
			
			ASCharacter* Leader = Spawn(Data.LeaderData.Leader, LeaderLocation, FRotator::ZeroRotator, Data.LeaderData.CharacterData, true);
			if (!Leader)
				continue;
		
			auto Group = Cast<ASGroup>(World->SpawnActor(ASGroup::StaticClass(), &FVector::ZeroVector, &FRotator::ZeroRotator, SpawnParams));
			TrackActor(Group, false);
			if (!Group)
				continue;
		
			Leader->GroupComponent->SetGroup(Group);
			Group->SetData(Leader, Data.GroupData);

			for (const auto& MemberData : Data.Members)
			{
				for (int y = 0; y < MemberData.Amount; y++)
				{
					FVector MemberLocation = GetRandomGroupMemberLocation(*Leader, y);
					ASCharacter* Member = Spawn(MemberData.CharacterType, MemberLocation, FRotator::ZeroRotator, Data.LeaderData.CharacterData , true);
					if (Member)
					{
						Member->GroupComponent->SetGroup(Group);
						Member->GetCharacterMovement()->MaxWalkSpeed = Leader->GetCharacterMovement()->MaxWalkSpeed - Data.GroupData.MemberSpeedReduction;
						Group->AddMember(Member);
					}
				}
			}
		}
		
	}
}

bool ASProceduralGeneration::GetRandomPoint(OUT FVector& OutLocation) const
{
	const int32 Seed = GenerationSeed + SeedCounter++;
	for (int i = 0; i < 50; i++)
	{
		if (UseSpawnRadius)
		{
			if (SNavigationUtils::GetRandomReachablePosition(GetWorld(), GetActorLocation(), SpawnRadius, Seed, OutLocation))
			{
				OutLocation.Z += 90.0f;
				return true;
			}
		}
		else
		{
			if (SNavigationUtils::GetRandomPoint(GetWorld(), Seed, OutLocation))
			{
				OutLocation.Z += 90.0f;
				return true;
			}
		}
		
	}

#if WITH_EDITOR
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("ProceduralGeneration: Could not find a random point on navigation to spawn the character!"));
#endif
	return false;
}