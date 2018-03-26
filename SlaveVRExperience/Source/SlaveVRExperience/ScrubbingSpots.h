// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
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
	AActor* scrubber;
	UStaticMeshComponent* SphereVisual;

	UBoxComponent * collisionBox;
	UStaticMeshComponent* BoxVisual;
	FVector boxScale;

	bool trueFalse;
	float scallingNum;
	int timerNum;
	FTimerHandle timerHandler;
	FVector oldVector;
	FVector newVector;

};

