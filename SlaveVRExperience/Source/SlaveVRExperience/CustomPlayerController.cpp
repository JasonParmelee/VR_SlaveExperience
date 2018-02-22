// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomPlayerController.h"
#include "Public/EngineUtils.h"
#include "NPC.h"

// Called to bind functionality to input
void ACustomPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// Set up "movement" bindings
	InputComponent->BindAction("DebugButton1", IE_Pressed, this, &ACustomPlayerController::Debug1);
}

void ACustomPlayerController::Debug1()
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Headshot!"));
	}

	for (TActorIterator<ANPC> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		ActorItr->Debug1();
	}
}
