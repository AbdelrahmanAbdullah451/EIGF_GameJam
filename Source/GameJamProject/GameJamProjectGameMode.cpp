// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameJamProjectGameMode.h"
#include "GameJamProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameJamProjectGameMode::AGameJamProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
