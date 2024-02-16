// Fill out your copyright notice in the Description page of Project Settings.


#include "SGroup.h"

#include "SGroupComponent.h"
#include "SCharacter.h"

// Called when the game starts or when spawned
void ASGroup::BeginPlay()
{
	Super::BeginPlay();

	for (const auto& Member : Members)
	{
		if (!Member)
			continue;
		
		if (auto* GroupComponent = Member->GetComponentByClass<USGroupComponent>())
		{
			GroupComponent->SetGroup(this);
		}
	}
	
}
