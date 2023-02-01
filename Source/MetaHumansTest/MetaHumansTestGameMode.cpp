// Copyright Epic Games, Inc. All Rights Reserved.

#include "MetaHumansTestGameMode.h"
#include "MetaHumansTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMetaHumansTestGameMode::AMetaHumansTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
