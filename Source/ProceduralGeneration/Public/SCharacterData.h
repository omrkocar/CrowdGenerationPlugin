// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "SCharacterData.generated.h"

UENUM(BlueprintType, Blueprintable)
enum class EAction : uint8
{
	Walk,
	Sit,
	Talk,
	Carry
};

USTRUCT(BlueprintType)
struct FASCharacterData
{
	GENERATED_BODY()

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Custom")
	EAction Action;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Animation Play Rate"), Category = "Custom")
	float AnimationPlayRate = 1.0f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Min Target Distance", ClampMin = 0.0f), Category = "Custom")
	float MinTargetDistance = 2000.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Max Target Distance"), Category = "Custom")
	float MaxTargetDistance = 5000.0f;
};
