// Copyright Bitr8. All Rights Reserved.


#include "TeddyBearBlue.h"

// Sets default values
ATeddyBearBlue::ATeddyBearBlue()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ATeddyBearBlue::BeginPlay()
{
	Super::BeginPlay();

	FVector CurrentScale = GetActorScale3D();
	SetActorScale3D(FVector(CurrentScale.X * 1, CurrentScale.Y * 3, CurrentScale.Z * 1));
}

// Called every frame
void ATeddyBearBlue::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

