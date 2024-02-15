// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SGenerationData.h"
#include "GameFramework/Actor.h"
#include "SGroup.generated.h"

class ASCharacter;

UCLASS()
class PROCEDURALGENERATION_API ASGroup : public AActor
{
	GENERATED_BODY()
	
public:
	ASGroup();
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Group")
	USceneComponent* RootComp;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Group")
	ASCharacter* Leader;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Group")
	TArray<ASCharacter*> Members;

	void Cleanup();

	void TryUpdateWidth(int32 Index);
	int GetWidth(int maxIndex);
	void CreateGroupPoint(int32 Index);
	FVector GetPointOffset(int32 Index);

	UPROPERTY()
	TMap<int32, AActor*> GroupPoints;
	UPROPERTY()
	int CurrentWidth = 0;
	UPROPERTY()
	FASGroupData GroupData;

	void SetData(ASCharacter* leader, const FASGroupData& groupData);
	AActor* GetPoint(int32 Index);
	void AddMember(ASCharacter* Character);

	UPROPERTY()
	AActor* PointParent;
	bool IsIdle;
	
protected:
	virtual void BeginPlay() override;;

	void UpdateDestinations();
	void OnIdleUpdate(float DeltaTime);
	void OnMoveUpdate(float DeltaTime);
	virtual void Tick(float DeltaSeconds) override;
	void SetPointParentData();
};
