// Fill out your copyright notice in the Description page of Project Settings.


#include "Mover.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AMover::AMover()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AMover::BeginPlay()
{
	Super::BeginPlay();

	TArray<UStaticMeshComponent*> StaticMeshComponent;
	GetComponents(StaticMeshComponent);

	if (StaticMeshComponent.Num() > 0) {
		UStaticMeshComponent* StaticMesh = StaticMeshComponent[0];
		StaticMesh->AddImpulse(FVector(0.0f,1000.0f,1000.0f));
	}

}

// Called every frame
void AMover::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

