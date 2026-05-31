// Copyright Bitr8. All Rights Reserved.


#include "TeddyBearPurple.h"

// Sets default values
ATeddyBearPurple::ATeddyBearPurple()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ATeddyBearPurple::BeginPlay()
{
	Super::BeginPlay();

	FVector CurrentScale = GetActorScale3D();
	SetActorScale3D(FVector(CurrentScale.X * 1, CurrentScale.Y * 1, CurrentScale.Z * 3));
	
}

// Called every frame
void ATeddyBearPurple::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

