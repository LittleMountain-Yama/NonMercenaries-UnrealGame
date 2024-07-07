// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonTPGameMode.h"
#include "ThirdPersonTPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPersonTPGameMode::AThirdPersonTPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
