// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"

#include "EngineUtils.h"
#include "NavigationSystem.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "SGroupComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "SProceduralGeneration.h"

// Sets default values
ASCharacter::ASCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	GroupComponent = CreateDefaultSubobject<USGroupComponent>(TEXT("Group Component"));

	GetCharacterMovement()->bUseRVOAvoidance = true;
}

void ASCharacter::SetData(const FASCharacterData& Data, int seedModifier)
{
	CharacterData = Data;
	CharacterSeed = seedModifier;
	AnimationStartPosition = FMath::RandRange(0.0f, 1.0f);
}

bool ASCharacter::IsPartOfGroup(USGroupComponent*& GroupComp, bool& IsLeader)
{
	if (GroupComponent && GroupComponent->GetGroup())
	{
		GroupComp = GroupComponent;
		IsLeader = GroupComp->IsLeader();
		return true;
	}

	IsLeader = false;
	GroupComp = nullptr;
	return false;
}

void ASCharacter::SetActorRotation()
{
	FVector Direction = (TargetLocation - GetActorLocation());
	Direction.Normalize();
	const FRotator NewRotation = FRotationMatrix::MakeFromX(Direction).Rotator();
	Super::SetActorRotation(NewRotation);
}

void ASCharacter::BeginPlay()
{
	Super::BeginPlay();

	InitialPosition = GetActorLocation();

	ASProceduralGeneration* ProcGen = nullptr;
	for (TActorIterator<ASProceduralGeneration> It(GetWorld(), ASProceduralGeneration::StaticClass()); It; ++It)
	{
		ProcGen = *It;
		if (ProcGen ->GetSpawnedCharacters().Contains(this))
			break;
	}

	if (!ProcGen)
	{
#if WITH_EDITOR
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, "Could not fetch a seed. ProceduralGeneration actor must be placed into the scene!");
#endif
		return;
	}

	TargetLocationSeed = ProcGen->TargetLocationSeed;
	
	SetTargetLocation();
	if (CharacterData.Action == EAction::Walk)
		SetActorRotation();
}

void ASCharacter::SetTargetLocation()
{
	if (GroupComponent->GetGroup() && !GroupComponent->IsLeader())
		return;
	
	if (TargetActor)
	{
		TargetLocation = TargetActor->GetActorLocation();
		return;
	}
	
	UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
	if (!NavSys)
		return;

	const FVector RandomLocation = FindRandomLocation();
	
	TargetLocation = RandomLocation;
}

FVector ASCharacter::FindRandomLocation()
{
	int32 SeedModifier = 0;
	for (int i = 0; i < 50; i++)
	{
		if (FindPosition(SeedModifier++))
			return TargetLocation;
	}
	
	return GetActorLocation(); 
}

bool ASCharacter::FindPosition(int32 SeedModifier)
{
	const FVector Location = GetActorLocation();
	const float Radius = CharacterData.MaxTargetDistance;

	bool IsValidPosition = SNavigationUtils::GetRandomReachablePosition(GetWorld(), Location, Radius, TargetLocationSeed + SeedModifier, TargetLocation);
	const float DistanceToTarget = FVector::Distance(TargetLocation, Location);
	const bool IsValid = IsValidPosition && DistanceToTarget > CharacterData.MinTargetDistance;
	return IsValid;
}