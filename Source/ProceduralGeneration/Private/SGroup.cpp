// Fill out your copyright notice in the Description page of Project Settings.


#include "SGroup.h"

#include "SGroupComponent.h"
#include "SCharacter.h"
#include "SMemberPointParent.h"
#include "SMemberPoint.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"


ASGroup::ASGroup()
{
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
	SetRootComponent(RootComp);
}

void ASGroup::BeginPlay()
{
	Super::BeginPlay();

	if (!PointParent)
		SetPointParentData();

	if (auto* LeaderGroupComp = Leader->GetComponentByClass<USGroupComponent>())
	{
		LeaderGroupComp->SetGroup(this);
	}

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

void ASGroup::UpdateDestinations()
{
	if (Members.Num() == 0)
		return;
	
	int nbrPointsUsed = 0;
	TArray<ASCharacter*> members = Members;

	for (const auto& [index, Point] : GroupPoints)
	{
		++nbrPointsUsed;

		float MinDistance = INFINITY;
		ASCharacter* ClosestMember = Members[0];
		int ClosestIndex = 0;
		int IndexMember = 0;

		for (auto member : members)
		{
			float distance = FVector::Distance(Point->GetActorLocation(), member->GetActorLocation());
			if (distance < MinDistance)
			{
				ClosestMember = member;
				ClosestIndex = IndexMember;
				MinDistance = distance;
			}

			++IndexMember;
		}

		ClosestMember->TargetActor = Point;
		members.RemoveAt(ClosestIndex);

		if (members.Num() == 0)
			break;
	}
}

void ASGroup::OnIdleUpdate(float DeltaTime)
{
	if (FVector::Distance(Leader->GetActorLocation(), GetActorLocation()) < GroupData.HysteresisDistance)
		return;

	IsIdle = false;
	OnMoveUpdate(DeltaTime);
	UpdateDestinations();
}

void ASGroup::OnMoveUpdate(float DeltaTime)
{
	if (FVector::Distance(Leader->GetActorLocation(), GetActorLocation()) <= GroupData.LeaderDistance)
	{
		IsIdle = true;
		return;
	}

	FVector Destination = GetActorLocation() - Leader->GetActorLocation();
	Destination.Normalize();
	Destination *= GroupData.LeaderDistance;
	Destination += Leader->GetActorLocation();

	FVector NewLocation = UKismetMathLibrary::VInterpTo(GetActorLocation(), Destination, DeltaTime, Leader->GetCharacterMovement()->MaxWalkSpeed);
	SetActorLocation(NewLocation);

	FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), Leader->GetActorLocation());
	SetActorRotation(LookAtRotation);
}

void ASGroup::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (IsIdle)
	{
		OnIdleUpdate(DeltaSeconds);
	}
	else
	{
		OnMoveUpdate(DeltaSeconds);
	}
	
}

void ASGroup::SetPointParentData()
{	
	PointParent = GetWorld()->SpawnActor<ASMemberPointParent>();
	PointParent->AttachToComponent(RootComp, FAttachmentTransformRules::KeepRelativeTransform);
	PointParent->SetActorRelativeLocation(FVector::ForwardVector * GroupData.RootForwardOffset);
	PointParent->SetActorRotation(FRotator::ZeroRotator);
}

void ASGroup::SetData(ASCharacter* leader, const FASGroupData& groupData)
{
	this->Leader = leader;
	this->GroupData = groupData;

	SetActorLocation(Leader->GetActorLocation());

	SetPointParentData();
}

AActor* ASGroup::GetPoint(int32 Index)
{
	if (!GroupPoints.Contains(Index))
		CreateGroupPoint(Index);

	return GroupPoints[Index];
}

void ASGroup::AddMember(ASCharacter* Character)
{
	Members.Add(Character);
	Character->SetActorLocation(GetPoint(Members.Num() - 1)->GetActorLocation());
	UpdateDestinations();
}

void ASGroup::Cleanup()
{
	for (const auto& [index, point] : GroupPoints)
	{
		GetWorld()->DestroyActor(point);
	}
	
	GroupPoints.Empty();
	GetWorld()->DestroyActor(PointParent);
}

void ASGroup::TryUpdateWidth(int32 Index)
{
	int NewWidth = GetWidth(Index);
	if (CurrentWidth >= NewWidth)
		return;

	CurrentWidth = NewWidth;
}

int ASGroup::GetWidth(int maxIndex)
{
	int groupNumber = maxIndex / GroupData.MemberPerRow;
	int result = groupNumber + 1;
	return result;
}

void ASGroup::CreateGroupPoint(int32 Index)
{
	AActor* MemberPoint = GetWorld()->SpawnActor<ASMemberPoint>();
	MemberPoint->AttachToComponent(PointParent->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

	TryUpdateWidth(Index);
	
	FVector Offset = GetPointOffset(Index);
	MemberPoint->SetActorRelativeLocation(Offset);
	MemberPoint->SetActorRotation(FRotator::ZeroRotator);
	
	GroupPoints.Add(Index, MemberPoint);
}

FVector ASGroup::GetPointOffset(int32 Index)
{
	int MaxMembersPerRow = GroupData.MemberPerRow;
	int sign = (Index % 2 == 0) ? 1 : -1;
	int xOffset = FMath::CeilToInt((Index % MaxMembersPerRow) / 2.0f);
	int zOffset = Index / MaxMembersPerRow;

	float x = sign * GroupData.WidthOffset * xOffset;
	float z = zOffset * -GroupData.LengthOffset;

	return FVector(z, x, 0);
}
