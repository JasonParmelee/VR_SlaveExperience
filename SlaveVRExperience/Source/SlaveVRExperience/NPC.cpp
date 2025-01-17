// Fill out your copyright notice in the Description page of Project Settings.

#include "NPC.h"
#include "NPCWorkstation.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"


// Sets default values
ANPC::ANPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CurrentDelta = FMath::FRand();

	
}

// Called when the game starts or when spawned
void ANPC::BeginPlay()
{
	Super::BeginPlay();
	
	UCharacterMovementComponent* MyCharacterMovement = GetCharacterMovement();
	MyCharacterMovement->MaxWalkSpeed = NPCMaxSpeed;

	EnableInput(UGameplayStatics::GetPlayerController(GetWorld(), 0));
}

// Called to bind functionality to input
void ANPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up "movement" bindings
	PlayerInputComponent->BindAction("DebugButton1", IE_Pressed, this, &ANPC::Debug1);
}

void ANPC::NotifyActorBeginOverlap(AActor * OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);
	if ((OtherActor != nullptr) && (OtherActor != this))
	{
		if (OtherActor->IsA(ANPCWorkstation::StaticClass())) {
			if (GEngine) {
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Headshot!"));
			}
			if (TargetActor == OtherActor) {
			
			}

			//Begin walking towards the AnimationOrigin, Once we hit it (or after a set amount of time),
			//play the enter animation.
			//Once the enter animation finishes, attach the prop to the actor's hand if possible
			//Begin looping the main animation a set number of times
			//Play the exit animation and have the prop disconnect from the actor
		}
	}
}

void ANPC::Debug1() 
{
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Headshot!"));
	}
	NPCState = ENPCStateEnum::VE_MoveToPlayer;
}

// Called every frame
void ANPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

