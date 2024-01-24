// Copyright Epic Games, Inc. All Rights Reserved.

#include "GibberishGameMode.h"
#include "GibberishCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGibberishGameMode::AGibberishGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
