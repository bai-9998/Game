// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShootingTrainingGameMode.generated.h"


UCLASS(minimalapi)
class AShootingTrainingGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AShootingTrainingGameMode();

	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintNativeEvent)
	void OnVictory();
};



