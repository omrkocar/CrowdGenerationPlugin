// Fill out your copyright notice in the Description page of Project Settings.


#include "SMemberPointParent.h"

// Sets default values
ASMemberPointParent::ASMemberPointParent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	SetRootComponent(RootComp);
}

// Called when the game starts or when spawned
void ASMemberPointParent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASMemberPointParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

