// Fill out your copyright notice in the Description page of Project Settings.

#include "NPCWorkstation.h"
#include "CustomGameMode.h"


// Sets default values
ANPCWorkstation::ANPCWorkstation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("RootCollision"));
	CollisionBox->SetHiddenInGame(false);

	CollisionBox->SetBoxExtent(FVector(100, 100, 100), true);
	RootComponent = CollisionBox;

	CollisionBox->bGenerateOverlapEvents = true;
	//CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ADeckTeleporter::OnOverlapBegin);
	//CollisionBox->OnComponentEndOverlap.AddDynamic(this, &ADeckTeleporter::OnOverlapEnd);

	AnimationOrigin = CreateDefaultSubobject<USphereComponent>(TEXT("AnimationOrigin"));
	AnimationOrigin->SetHiddenInGame(true);
	AnimationOrigin->SetSphereRadius(15);
}

// Called when the game starts or when spawned
void ANPCWorkstation::BeginPlay()
{
	Super::BeginPlay();

	/*//When this NPC is created, add it to the NPCArray in our NPCManager.
	ACustomGameMode* GameMode = (ACustomGameMode*)GetWorld()->GetAuthGameMode();
	GameMode->MyNPCManager->WorkstationList.Add(this);*/
	
}

// Called every frame
void ANPCWorkstation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

