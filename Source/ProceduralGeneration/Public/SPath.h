// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPath.generated.h"

UCLASS()
class PROCEDURALGENERATION_API ASPath : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPath();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class USplineComponent* SplinePath;

	// Increments the spline path index.
	UFUNCTION(BlueprintCallable, Category = "Custom")
	void IncrementIndex();

	// Returns the next spline point as World Position
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Custom")
	FVector GetNextPointAsWorldPos();

	void SetIndex(int newIndex);

	// Patrol path index
	int PathIndex;
};
