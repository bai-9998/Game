// Fill out your copyright notice in the Description page of Project Settings.


#include "shootTarget.h"

#include "MyGameStateBase.h"

// Sets default values
AshootTarget::AshootTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AshootTarget::BeginPlay()
{
	Super::BeginPlay();
	
}

void AshootTarget::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if (OtherActor)
	{
		Destroy();

		Cast<AMyGameStateBase>(GetWorld()->GetGameState())->Score++;
	}
}

// Called every frame
void AshootTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

