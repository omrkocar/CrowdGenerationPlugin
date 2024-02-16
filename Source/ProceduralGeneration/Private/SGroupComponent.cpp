// Fill out your copyright notice in the Description page of Project Settings.


#include "SGroupComponent.h"
#include "SCharacter.h"

USGroupComponent::USGroupComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}

void USGroupComponent::SetGroup(ASGroup* NewGroup)
{
	Group = NewGroup;
}


bool USGroupComponent::IsLeader()
{
	return Group->Leader == dynamic_cast<ASCharacter*>(GetOwner());
}

ASCharacter* USGroupComponent::GetLeader()
{
	return Group->Leader;
}
