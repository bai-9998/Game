// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "shootTarget.generated.h"

UCLASS()
class SHOOTINGTRAINING_API AshootTarget : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AshootTarget();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(EditAnywhere)
		UParticleSystem* Particle;
};
