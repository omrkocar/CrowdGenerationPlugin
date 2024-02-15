// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "SCharacterData.h"
#include "UObject/ObjectMacros.h"
#include "SGenerationData.generated.h"

class ASCharacter;

USTRUCT(BlueprintType)
struct FASIndividualData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="CharacterType"), Category = "Custom")
	TSubclassOf<ASCharacter> CharacterType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Amount"), Category = "Custom")
	int32 Amount = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="CharacterData"), Category = "Custom")
	FASCharacterData CharacterData;
};

USTRUCT(BlueprintType)
struct FASLeaderData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Leader"), Category = "Custom")
	TSubclassOf<ASCharacter> Leader;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="CharacterData"), Category = "Custom")
	FASCharacterData CharacterData;
};

USTRUCT(BlueprintType)
struct FASMemberData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="CharacterType"), Category = "Custom")
	TSubclassOf<ASCharacter> CharacterType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Amount"), Category = "Custom")
	int32 Amount = 1;
};

USTRUCT(BlueprintType)
struct FASGroupData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Member Per Row"), Category = "Custom")
	int MemberPerRow = 5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Root Forward Offset"), Category = "Custom")
	float RootForwardOffset = -150.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Width Offset"), Category = "Custom")
	float WidthOffset = 100.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Length Offset"), Category = "Custom")
	float LengthOffset = 100.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Hysteresis Distance"), Category = "Custom")
	float HysteresisDistance = 25.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Leader Distance"), Category = "Custom")
	float LeaderDistance = 50.0f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Member Speed Reduction"), Category = "Custom")
	float MemberSpeedReduction = 10.0f;
};

USTRUCT(BlueprintType)
struct FASGroupGenerationData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Amount"), Category = "Custom")
	int Amount = 1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Group Data"), Category = "Custom")
	FASGroupData GroupData;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="LeaderData"), Category = "Custom")
	FASLeaderData LeaderData;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(DisplayName="Members"), Category = "Custom")
	TArray<FASMemberData> Members;
};



