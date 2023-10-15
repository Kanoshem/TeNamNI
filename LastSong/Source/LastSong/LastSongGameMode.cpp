// Copyright Epic Games, Inc. All Rights Reserved.

#include "LastSongGameMode.h"
#include "LastSongCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALastSongGameMode::ALastSongGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
