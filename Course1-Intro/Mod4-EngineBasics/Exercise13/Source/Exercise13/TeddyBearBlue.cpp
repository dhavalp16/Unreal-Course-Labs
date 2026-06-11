// Copyright Bitr8. All Rights Reserved.


#include "TeddyBearBlue.h"

// Sets default values
ATeddyBearBlue::ATeddyBearBlue()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATeddyBearBlue::BeginPlay()
{
	Super::BeginPlay();

	TArray<UStaticMeshComponent*> StaticMeshComponent;
	GetComponents(StaticMeshComponent);

	if (StaticMeshComponent.Num() > 0) {
		UStaticMeshComponent* StaticMesh = StaticMeshComponent[0];
		StaticMesh->AddImpulse(FVector(0.0f, 1000.0f, 550.0f));
	}
	
}

// Called every frame
void ATeddyBearBlue::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

