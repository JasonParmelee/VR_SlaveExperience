// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CustomPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class SLAVEVREXPERIENCE_API ACustomPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	// Called to bind functionality to input
	UFUNCTION()
	virtual void SetupInputComponent() override;

	UFUNCTION()
	void Debug1();

};

