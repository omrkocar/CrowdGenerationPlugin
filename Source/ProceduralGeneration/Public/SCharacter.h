// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SCharacterData.h"
#include "SCharacter.generated.h"

class UMaterialInstance;

UCLASS()
class PROCEDURALGENERATION_API ASCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASCharacter();

	void SetData(const FASCharacterData& Data, int seedModifier);

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Components")
	class USGroupComponent* GroupComponent;

	UFUNCTION(BlueprintCallable, Category = "Custom")
	bool IsPartOfGroup(USGroupComponent*& GroupComp, bool& IsLeader);
	void SetActorRotation();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Custom")
	AActor* TargetActor;

	UPROPERTY(BlueprintReadOnly, Category = "Custom")
	FVector InitialPosition;
	
	UPROPERTY(BlueprintReadOnly, Category = "Custom")
	FVector TargetLocation;

	FRandomStream RandomStream;
	int32 TargetLocationSeed;

protected:
	virtual void BeginPlay() override;
	void SetTargetLocation();
	FVector FindRandomLocation();
	bool FindPosition(int32 SeedModifier);

public:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Custom")
	class ASPath* Path;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom", meta = (ClampMin = 0, ClampMax = 2))
	FASCharacterData CharacterData;

	UPROPERTY(VisibleInstanceOnly, Category = "Custom")
	int CharacterSeed = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Custom")
	float AnimationStartPosition = 0;
};
