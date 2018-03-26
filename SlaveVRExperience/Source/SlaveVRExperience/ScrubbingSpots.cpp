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
	scallingNum = 1.0f;
	timerNum = 0;


	collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("RootCollision"));
	collisionBox->SetHiddenInGame(false);

	boxScale = FVector(170, 170, 20);
	collisionBox->SetBoxExtent(boxScale, true);
	RootComponent = collisionBox;

	SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisualRepresentation"));
	SphereVisual->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset(TEXT("/Game/Models/Dirt_Spot.Dirt_Spot"));
	if (SphereVisualAsset.Succeeded())
	{
		SphereVisual->SetStaticMesh(SphereVisualAsset.Object);
		SphereVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -80.0f));
	}


	collisionBox->bGenerateOverlapEvents = true;
	collisionBox->OnComponentBeginOverlap.AddDynamic(this, &AScrubbingSpots::OnOverlapBegin);
	collisionBox->OnComponentEndOverlap.AddDynamic(this, &AScrubbingSpots::OnOverlapEnd);
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
	
	FVector diffVector;
	float diffSize;
	if (trueFalse == true)
	{
		newVector = scrubber->GetActorLocation();
		FVector diffVector = newVector - oldVector;

		/*
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Vector Length: %f"), diffVector.Size()));
		*/

		diffSize = diffVector.Size();
	}
	else
		diffSize = 0.0;

	if (trueFalse == true && (scallingNum > 0) && (diffSize > 1.0f))
	{
		collisionBox->SetWorldScale3D(FVector(scallingNum));
		scallingNum -= .001f;
	}

	if (scallingNum <= 0)
	{
		/*
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("scallingNum is less than or equal to 0"));
			*/

		this->Destroy();
	}
	
	if (trueFalse == true)
		oldVector = newVector;
}

void AScrubbingSpots::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor == nullptr) || (OtherActor == this) || (OtherComp == nullptr))
		return;

	if (OtherActor->GetName().Equals("Scrubber"))
	{
		scrubber = OtherActor;
		oldVector = scrubber->GetActorLocation();
		trueFalse = true;
	}


	GetWorldTimerManager().SetTimer(timerHandler, this, &AScrubbingSpots::TimerFunction, 1.0f, true);

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

	if (GEngine)
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Collide Actor: %s"), *OtherActor->GetName()));
	*/
}

void AScrubbingSpots::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr))
	{
		if (OtherActor->GetName().Equals("Scrubber"))
		{
			trueFalse = false;
		}

		GetWorldTimerManager().ClearTimer(timerHandler);

		/*
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("Leaving Actor: %s"), *OtherActor->GetName()));
		*/
	}
}

void AScrubbingSpots::TimerFunction()
{
	timerNum++;
	if (timerNum == 5)
	{
		/*
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Time is 5!"));
		*/

		//timerNum = 0;
	}
}

