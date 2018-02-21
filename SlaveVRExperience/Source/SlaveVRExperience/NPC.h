// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NPC.generated.h"

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ENPCTypeEnum : uint8
{
	VE_Default 	UMETA(DisplayName = "Default"),
	VE_Slave 	UMETA(DisplayName = "Slave"),
	VE_Guard	UMETA(DisplayName = "Guard")
};

UENUM(BlueprintType)		//"BlueprintType" is essential to include
enum class ENPCStateEnum : uint8
{
	VE_Idle 				UMETA(DisplayName = "Idle"),
	VE_MoveToTarget 		UMETA(DisplayName = "MoveToTarget"),
	VE_WorkstationBegin		UMETA(DisplayName = "WorkstationBegin"),
	VE_WorkstationEntering	UMETA(DisplayName = "WorkstationEntering"),
	VE_WorkstationLoop		UMETA(DisplayName = "WorkstationLoop"),
	VE_WorkstationExiting	UMETA(DisplayName = "WorkstationExiting"),
	VE_WorkstationExit		UMETA(DisplayName = "WorkstationExit"),
	VE_MoveToPlayer			UMETA(DisplayName = "MoveToPlayer")
};

UCLASS()
class SLAVEVREXPERIENCE_API ANPC : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPC();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	ENPCTypeEnum NPCType = ENPCTypeEnum::VE_Default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	ENPCStateEnum NPCState = ENPCStateEnum::VE_Idle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	float NPCMaxSpeed = 75.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	float CurrentDelta = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	AActor* TargetActor = NULL;

	UPROPERTY(BlueprintReadWrite, Category = "Settings")
	float timer = 0;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor);

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void Debug1();

};
