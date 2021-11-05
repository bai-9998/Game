// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootingTrainingGameMode.h"
#include "ShootingTrainingHUD.h"
#include "ShootingTrainingCharacter.h"
#include "MyGameStateBase.h"
#include "UObject/ConstructorHelpers.h"

AShootingTrainingGameMode::AShootingTrainingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShootingTrainingHUD::StaticClass();
}

void AShootingTrainingGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	AMyGameStateBase* GS = GetGameState<AMyGameStateBase>();
	if (GS)
	{
		if (GS->Score==7)
		{
			OnVictory();
		}
	}
}

void AShootingTrainingGameMode::OnVictory_Implementation()
{
}

