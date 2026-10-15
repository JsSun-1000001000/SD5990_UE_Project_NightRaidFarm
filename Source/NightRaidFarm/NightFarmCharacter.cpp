// Fill out your copyright notice in the Description page of Project Settings.


#include "NightFarmCharacter.h"

// Sets default values
ANightFarmCharacter::ANightFarmCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ANightFarmCharacter::SetSearchingNest(bool bSearching)
{
	bIsSearchingNest = bSearching;
}

// Called when the game starts or when spawned
void ANightFarmCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANightFarmCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANightFarmCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

