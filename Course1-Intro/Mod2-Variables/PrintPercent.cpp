// Copyright Bitr8 2026. All Rights Reserved.


#include "PrintPercent.h"

// Sets default values
APrintPercent::APrintPercent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void APrintPercent::BeginPlay()
{
	Super::BeginPlay();

	const int MaxScore{ 100 };

	int Score{ 84 };;
	float Percent = ((float)Score / MaxScore) * 100;

	UE_LOG(LogTemp, Warning, TEXT("Percent: %f"), Percent);
}

// Called every frame
void APrintPercent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

