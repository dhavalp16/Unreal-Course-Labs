// Copyright Bitr8. All Rights Reserved.


#include "TeddyBearPurple.h"

// Sets default values
ATeddyBearPurple::ATeddyBearPurple()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATeddyBearPurple::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<UStaticMeshComponent*> StaticMeshComponent;
	GetComponents(StaticMeshComponent);

	if (StaticMeshComponent.Num() > 0) {
		UStaticMeshComponent* StaticMesh = StaticMeshComponent[0];
		StaticMesh->AddImpulse(FVector(0.0f, -1000.0f, 550.0f));
	}
	
}

// Called every frame
void ATeddyBearPurple::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

