// Copyright Epic Games, Inc. All Rights Reserved.

#include "AndroidGameGameMode.h"
#include "AndroidGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAndroidGameGameMode::AAndroidGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
