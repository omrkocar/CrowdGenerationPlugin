// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SMemberPointParent.generated.h"

UCLASS()
class PROCEDURALGENERATION_API ASMemberPointParent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASMemberPointParent();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Group")
	USceneComponent* RootComp;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
