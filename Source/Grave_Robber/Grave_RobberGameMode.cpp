// Copyright Epic Games, Inc. All Rights Reserved.

#include "Grave_RobberGameMode.h"
#include "Grave_RobberPlayerController.h"
#include "Grave_RobberCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGrave_RobberGameMode::AGrave_RobberGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGrave_RobberPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}