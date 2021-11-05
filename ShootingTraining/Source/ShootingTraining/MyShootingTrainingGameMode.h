// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShootingTrainingGameMode.h"
#include "MyShootingTrainingGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGTRAINING_API AMyShootingTrainingGameMode : public AShootingTrainingGameMode
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
};
