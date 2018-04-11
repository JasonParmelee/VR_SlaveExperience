// Fill out your copyright notice in the Description page of Project Settings.

#include "FoodTeleporter.h"
#include "Components/StaticMeshComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "EngineUtils.h"
#include "Engine/StaticMeshActor.h"

// Sets default values
AFoodTeleporter::AFoodTeleporter(const FObjectInitializer& objectInitializer)
	:Super(objectInitializer)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("RootCollision"));
	collisionBox->SetHiddenInGame(true);

	boxScale = FVector(100, 200, 20);
	collisionBox->SetBoxExtent(boxScale, true);
	RootComponent = collisionBox;

	collisionBox->bGenerateOverlapEvents = true;
	collisionBox->OnComponentBeginOverlap.AddDynamic(this, &AFoodTeleporter::OnOverlapBegin);
	collisionBox->OnComponentEndOverlap.AddDynamic(this, &AFoodTeleporter::OnOverlapEnd);

}

// Called when the game starts or when spawned
void AFoodTeleporter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AFoodTeleporter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AFoodTeleporter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	for (TActorIterator<AStaticMeshActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		// Same as with the Object Iterator, access the subclass instance with the * or -> operators.
		AStaticMeshActor *Mesh = *ActorItr;

		if (OtherActor->GetName().Equals("Food"))
			OtherActor->SetActorLocation(ActorItr->GetActorLocation(), false);
	}
}


void AFoodTeleporter::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}
