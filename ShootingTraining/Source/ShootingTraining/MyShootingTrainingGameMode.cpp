// Fill out your copyright notice in the Description page of Project Settings.


#include "MyShootingTrainingGameMode.h"

void AMyShootingTrainingGameMode::BeginPlay()
{
	Super::BeginPlay();

	//��ӡ��־
	UE_LOG(LogTemp, Log, TEXT("Hello Game Mode"));

	//hud
	GEngine->AddOnScreenDebugMessage(1, 5, FColor::Green, TEXT("Hello Game Mode"));
}

