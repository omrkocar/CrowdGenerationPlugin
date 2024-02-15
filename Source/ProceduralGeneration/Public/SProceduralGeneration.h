// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NavigationSystem.h"
#include "GameFramework/Actor.h"
#include "SGenerationData.h"
#include "SProceduralGeneration.generated.h"

class ASCharacter;

class SNavigationUtils
{
public:
	static bool GetRandomReachablePosition(UWorld* World, const FVector& Origin, const float Radius, const int32 Seed, OUT FVector& OutLocation)
	{
		auto NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World);
		if (!NavSys)
		{
#if WITH_EDITOR
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Navigation System is null. Investigate!"));
#endif
			return false;
		}
		
		FMath::RandInit(Seed);

		FNavLocation ProjectedNavLocation;
		bool IsValid = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World)->GetRandomReachablePointInRadius(Origin, Radius, ProjectedNavLocation);
		OutLocation = ProjectedNavLocation.Location;
		return IsValid;
	}

	static bool GetRandomPoint(UWorld* World, const int32 Seed, OUT FVector& OutLocation)
	{
		auto NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World);
		if (!NavSys)
		{
#if WITH_EDITOR
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Navigation System is null. Investigate!"));
#endif
			return false;
		}
		
		FMath::RandInit(Seed);

		FNavLocation ProjectedNavLocation;
		bool IsValid = NavSys->GetRandomPoint(ProjectedNavLocation);
		OutLocation = ProjectedNavLocation.Location;
		return IsValid;
	}
};

UCLASS()
class PROCEDURALGENERATION_API ASProceduralGeneration : public AActor
{
	GENERATED_BODY()
	
public:	
	void SpawnGroups();
	void SpawnIndividualCharacters();
	ASCharacter* Spawn(const TSubclassOf<ASCharacter>& Type, const FVector& Position, const FRotator& Rotation, const FASCharacterData& CharacterData, bool IsCharacter);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Custom")
	int32 GenerationSeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Custom")
	int32 TargetLocationSeed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Custom")
	bool bGenerateAtRuntime;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Custom")
	bool UseSpawnRadius;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Custom", meta = (EditCondition = "UseSpawnRadius"))
	float SpawnRadius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Custom")
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandleMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Custom")
	TArray<FASIndividualData> IndividualGenerationData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Custom")
	TArray<FASGroupGenerationData> GroupGenerationData;

	UFUNCTION(CallInEditor, BlueprintCallable, Category = "Custom")
	void GenerateMap();
	UFUNCTION(CallInEditor, BlueprintCallable, Category = "Custom", DisplayName = "Clear Map")
	void ClearMap();

	TArray<AActor*> GetSpawnedCharacters() { return SpawnedCharacters;}
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	bool GetRandomPoint(OUT FVector& OutLocation) const;

private:
	bool SetupPrerequisites();
	void GenerateMapInternal();

	void SetCharacterData(ASCharacter* Character, const FASCharacterData& Data, int SeedModifier) const;

	bool IsCollidingWithAnotherActor(AActor* Actor);
	void TrackActor(AActor* actor, bool isCharacter);
	
	FVector GetRandomGroupMemberLocation(const AActor& Leader, int32 i) const;

	inline static int SeedCounter = 0;
	TWeakObjectPtr<UNavigationSystemV1> NavSys;
	TWeakObjectPtr<UWorld> World;
	FActorSpawnParameters SpawnParams;

	UPROPERTY(VisibleAnywhere, Category = "Custom")
	TArray<AActor*> SpawnedCharacters;
	UPROPERTY()
	TArray<AActor*> SpawnedActors;
};
