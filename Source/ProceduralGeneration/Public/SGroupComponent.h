// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SGroup.h"
#include "SGroupComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROCEDURALGENERATION_API USGroupComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USGroupComponent();

	void SetGroup(ASGroup* NewGroup);
	UFUNCTION(BlueprintCallable, Category = "Custom")
	const ASGroup* GetGroup() const { return Group; }
	UFUNCTION(BlueprintCallable, Category = "Custom")
	bool IsLeader();
	UFUNCTION(BlueprintCallable, Category = "Custom")
	ASCharacter* GetLeader();

private:
	UPROPERTY(VisibleAnywhere, Category = "Custom")
	ASGroup* Group;
};
