// Fill out your copyright notice in the Description page of Project Settings.

#include "ScrubbingSpots.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "TimerManager.h"
#include "EngineUtils.h"
#include "Engine/StaticMeshActor.h"


// Sets default values
AScrubbingSpots::AScrubbingSpots(const FObjectInitializer& objectInitializer)
	:Super(objectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	trueFalse = false;
	scaleNumber = 1.0f;
	timerNum = 0;

	_collision = CreateDefaultSubobject<USphereComponent>(TEXT("RootCollision"));

	_collision->SetSphereRadius(150.0f);
	_collision->SetHiddenInGame(false);
	//_collision->SetMobility(EComponentMobility::Movable);

	RootComponent = _collision;

	SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
	SphereVisual->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	if (SphereVisualAsset.Succeeded())
	{
		SphereVisual->SetStaticMesh(SphereVisualAsset.Object);
		SphereVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
		//SphereVisual->SetWorldScale3D(FVector(0.8f));
	}


	_collision->bGenerateOverlapEvents = true;
	_collision->OnComponentBeginOverlap.AddDynamic(this, &AScrubbingSpots::OnOverlapBegin);
	_collision->OnComponentEndOverlap.AddDynamic(this, &AScrubbingSpots::OnOverlapEnd);
}

// Called when the game starts or when spawned
void AScrubbingSpots::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AScrubbingSpots::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*
	int i = 0;
	while (trueFalse == true && i < 1000)
	{
	_collision->SetWorldScale3D(FVector(.999f));

	i++;
	}
	*/

}

void AScrubbingSpots::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor == nullptr) || (OtherActor == this) || (OtherComp == nullptr))
		return;



	scaleNumber += .2f;

	//SphereVisual->SetHiddenInGame(trueFalse);
	//SphereVisual->SetWorldScale3D(FVector(scaleNumber));
	FVector NewLocation = OtherActor->GetActorLocation();
	//NewLocation.Z += 600.0f;
	OtherActor->SetActorLocation(NewLocation, false);
	//_collision->SetWorldScale3D(FVector(scaleNumber));

	if (OtherActor->GetName().Equals("Scrubber"))
	{
		trueFalse = true;
	}

	/*
	for (TActorIterator<AStaticMeshActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
	// Same as with the Object Iterator, access the subclass instance with the * or -> operators.
	AStaticMeshActor *Mesh = *ActorItr;
	if (GEngine)
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Actor: %s"), *ActorItr->GetName()));


	if (ActorItr->GetName().Equals("Scrubber"))
	{
	trueFalse = true;
	//OtherActor->SetActorLocation(ActorItr->GetActorLocation(), false);
	if (GEngine)
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("True Actor: %s"), *ActorItr->GetName()));
	}
	}
	*/

	GetWorldTimerManager().SetTimer(timerHandler, this, &AScrubbingSpots::TimerFunction, 1.0f, true);

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Collide Actor: %s"), *OtherActor->GetName()));
}

void AScrubbingSpots::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		if (OtherActor->GetName().Equals("Scrubber"))
		{
			trueFalse = false;
		}

		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Leaving Actor: %s"), *OtherActor->GetName()));
	}
}

void AScrubbingSpots::TimerFunction()
{
	timerNum++;
	if (timerNum == 5)
	{
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Time is 5!"));

		//timerNum = 0;
	}
}

