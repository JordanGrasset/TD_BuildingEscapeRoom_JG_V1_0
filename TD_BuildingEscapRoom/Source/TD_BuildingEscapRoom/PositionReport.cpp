// Fill out your copyright notice in the Description page of Project Settings.

#include "TD_BuildingEscapRoom.h"
#include "PositionReport.h"


// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
	

	// ...
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();
	FString Name = GetOwner()->GetName();
	FString Pos = GetOwner()->GetTransform().GetLocation().ToString();
	FString Rot = GetOwner()->GetTransform().GetRotation().ToString();
	FString Sca = GetOwner()->GetTransform().GetScale3D().ToString();
	UE_LOG(LogTemp, Warning, TEXT("Position Report reporting %s is at %s and %s and %s"),*Name, *Pos,*Rot,*Sca);
	// ...
	
}


// Called every frame
void UPositionReport::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );
	
	// ...
}

