// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAiCharacter.h"

// Sets default values
AMyAiCharacter::AMyAiCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyAiCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyAiCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyAiCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

