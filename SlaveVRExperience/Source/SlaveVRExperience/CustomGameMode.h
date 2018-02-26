// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NPCManager.h"
#include "CustomGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SLAVEVREXPERIENCE_API ACustomGameMode : public AGameModeBase
{
	GENERATED_BODY()
	public:
		ACustomGameMode();

		void MakeNPCManager();

		// Called every frame
		virtual void Tick(float DeltaTime) override;

		UPROPERTY(EditAnywhere)
		TSubclassOf<class ANPCManager> NPCManagerClass;

		UPROPERTY()
		ANPCManager* MyNPCManager;
};
