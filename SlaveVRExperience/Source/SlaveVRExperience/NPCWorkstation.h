// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Animation/AnimSequence.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "NPCWorkstation.generated.h"

UCLASS()
class SLAVEVREXPERIENCE_API ANPCWorkstation : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANPCWorkstation();

	bool Occupied = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	UAnimSequence* MainAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	UAnimSequence* EnterAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	UAnimSequence* ExitAnimationAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	AActor* Prop;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Settings")
	FName PropSocket;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	UBoxComponent* CollisionBox;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	USphereComponent* AnimationOrigin;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

	
	
};
