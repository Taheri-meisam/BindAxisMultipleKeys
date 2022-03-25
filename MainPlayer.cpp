// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/LevelStreaming.h"
#include "Containers/UnrealString.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"


// Sets default values
AMainPlayer::AMainPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAxis("One",this, &AMainPlayer::OnePressed);
	InputComponent->BindAxis("Two",this, &AMainPlayer::TwoPressed);


	//InputComponent->BindAxis( ("MoveX", this, &AMyPawn::Move_XAxis);

}

void AMainPlayer::BothKeyPressed()
{
	UE_LOG(LogTemp, Warning, TEXT("Both Key presses !!!"));

}

void AMainPlayer::TwoPressed(float val)
{
	
	k1 = val;
	if (k1 != 0) {
		UE_LOG(LogTemp, Warning, TEXT("Key two pressed "));
	}

	if (k1 != 0 && k2 != 0) {
		BothKeyPressed();
	}
}

void AMainPlayer::OnePressed(float val)
{

	k2 = val;
	if (k2 != 0) {
		UE_LOG(LogTemp, Warning, TEXT("Key One pressed "));
	}
}

