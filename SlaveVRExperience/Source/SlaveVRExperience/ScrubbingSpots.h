// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "ScrubbingSpots.generated.h"

UCLASS()
class SLAVEVREXPERIENCE_API AScrubbingSpots : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AScrubbingSpots(const FObjectInitializer& objectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void TimerFunction();

	UFUNCTION()
		virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		virtual void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

private:
	USphereComponent* _collision;
	UStaticMeshComponent* SphereVisual;
	bool trueFalse;
	float scaleNumber;
	int timerNum;
	FTimerHandle timerHandler;

};

