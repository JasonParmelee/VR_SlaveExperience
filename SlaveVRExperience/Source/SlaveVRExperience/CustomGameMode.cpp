// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomGameMode.h"

ACustomGameMode::ACustomGameMode(){
	PrimaryActorTick.bCanEverTick = true;
}

void ACustomGameMode::MakeNPCManager() {
	UWorld* World = GetWorld();
	if (World)
	{
		FActorSpawnParameters Parameters;
		Parameters.bAllowDuringConstructionScript = true;
		Parameters.bNoFail = true;
		Parameters.Owner = this;
		Parameters.Instigator = Instigator;

		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, NPCManagerClass == NULL ? TEXT("true") : TEXT("false"));
		}

		MyNPCManager = World->SpawnActor<ANPCManager>(NPCManagerClass, FVector(0.f, 0.f, 0.f), FRotator::ZeroRotator, Parameters);
	
		if (GEngine) {
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, MyNPCManager == NULL ? TEXT("true") : TEXT("false"));
		}
	}
}

void ACustomGameMode::Tick(float DeltaTime){
	Super::Tick(DeltaTime);
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 0.2f, FColor::Blue, NPCManagerClass == NULL ? TEXT("true") : TEXT("false"));
	}
}


