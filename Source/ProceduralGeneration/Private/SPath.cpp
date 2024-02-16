// Fill out your copyright notice in the Description page of Project Settings.


#include "SPath.h"
#include <Components/SplineComponent.h>

// Sets default values
ASPath::ASPath()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SplinePath = CreateDefaultSubobject<USplineComponent>(TEXT("SplinePathComponent"));
	SplinePath->SetupAttachment(RootComponent);
	SplinePath->SetDrawDebug(true);
	SplinePath->SetUnselectedSplineSegmentColor(FLinearColor::Red);
	SplinePath->SetSelectedSplineSegmentColor(FLinearColor::Black);
}

void ASPath::IncrementIndex()
{
	PathIndex = (PathIndex + 1) % (SplinePath->GetNumberOfSplinePoints());
}

FVector ASPath::GetNextPointAsWorldPos()
{
	IncrementIndex();
	return SplinePath->GetLocationAtSplinePoint(PathIndex, ESplineCoordinateSpace::World);
}

void ASPath::SetIndex(int newIndex)
{
	PathIndex = newIndex;
}

