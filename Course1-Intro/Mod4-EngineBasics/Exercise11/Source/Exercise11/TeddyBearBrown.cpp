// Copyright Bitr8. All Rights Reserved.


#include "TeddyBearBrown.h"

// Sets default values
ATeddyBearBrown::ATeddyBearBrown()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ATeddyBearBrown::BeginPlay()
{
	Super::BeginPlay();
	FVector CurrentScale = GetActorScale3D();
	SetActorScale3D(FVector(CurrentScale.X * 1, CurrentScale.Y * 3, CurrentScale.Z * 3));
}

// Called every frame
void ATeddyBearBrown::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

