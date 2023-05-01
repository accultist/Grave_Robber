// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Grave_RobberGameMode.generated.h"

UCLASS(minimalapi)
class AGrave_RobberGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGrave_RobberGameMode();

	// returns player current health
	UFUNCTION(BlueprintPure, Category = "Health")
		float getPlayerMaxHealth() const;

	virtual void BeginPlay() override;

protected:
	// player health
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health", Meta = (BlueprintProtected = "true"))
		float playerMaxHealth;

	// the widget class to use for our HUD screen
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health", Meta = (BlueprintProtected = "true"))
		TSubclassOf<class UUserWidget> HUDWidgetClass;

	// the instance of the HUD
	UPROPERTY()
		class UUserWidget* CurrentWidget;
};



