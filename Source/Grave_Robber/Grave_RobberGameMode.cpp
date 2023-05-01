// Copyright Epic Games, Inc. All Rights Reserved.

#include "Grave_RobberGameMode.h"
#include "Grave_RobberPlayerController.h"
#include "Grave_RobberCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"

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

void AGrave_RobberGameMode::BeginPlay()
{
	Super::BeginPlay();

	// get player health
	AGrave_RobberCharacter* playerCharacter = Cast<AGrave_RobberCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (playerCharacter)
	{
		playerMaxHealth = playerCharacter->getMaxHealth();
	}

	if (HUDWidgetClass)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		if (CurrentWidget)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

float AGrave_RobberGameMode::getPlayerMaxHealth() const
{
	return playerMaxHealth;
}