// Copyright Epic Games, Inc. All Rights Reserved.

#include "ToyStorageGameMode.h"
#include "ToyStorageCharacter.h"
#include "UObject/ConstructorHelpers.h"

AToyStorageGameMode::AToyStorageGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
