// Fill out your copyright notice in the Description page of Project Settings.


#include "SAIController.h"

#include "NavigationSystem.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "Navigation/CrowdManager.h"

 ASAIController::ASAIController(const FObjectInitializer& ObjectInitializer)
 	: Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
 {
    UCrowdFollowingComponent* CrowdFollowingComponent = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent());
    CrowdFollowingComponent->SetCrowdSimulationState(ECrowdSimulationState::Enabled);
// 	// CrowdFollowingComponent->SetCrowdRotateToVelocity(true);
// 	// CrowdFollowingComponent->SetCrowdAnticipateTurns(true);
// 	// //CrowdFollowingComponent->SetCrowdCollisionQueryRange(500.0f);
// 	// CrowdFollowingComponent->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Low);
// 	// CrowdFollowingComponent->SetCrowdSeparationWeight(2);
// 	// CrowdFollowingComponent->SetCrowdSeparation(true);
 }
