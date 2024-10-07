// Copyright Epic Games, Inc. All Rights Reserved.

#include "d3DetetiveGameMode.h"
#include "d3DetetiveHUD.h"
#include "d3DetetiveCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ad3DetetiveGameMode::Ad3DetetiveGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Ad3DetetiveHUD::StaticClass();
}
