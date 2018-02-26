// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Containers/Array.h"
#include "NPC.h"
#include "NPCWorkstation.h"
#include "NPCManager.generated.h"


UCLASS()
class SLAVEVREXPERIENCE_API ANPCManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANPCManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	TArray<ANPC*> NPCList;

	UPROPERTY(EditAnywhere)
	TArray<ANPCWorkstation*> WorkstationList;
};
