// Copyright Epic Games, Inc. All Rights Reserved.

#include "Grave_RobberPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "Grave_RobberCharacter.h"
#include "Engine/World.h"

AGrave_RobberPlayerController::AGrave_RobberPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
}

void AGrave_RobberPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
    
    // call function to automatically update the direction of the pawn every tick
    UpdateMouse();

    /*
	if(bInputPressed)
	{
		FollowTime += DeltaTime;

		// Look for the touch location
		FVector HitLocation = FVector::ZeroVector;
		FHitResult Hit;
		if(bIsTouch)
		{
			GetHitResultUnderFinger(ETouchIndex::Touch1, ECC_Visibility, true, Hit);
		}
		else
		{
			GetHitResultUnderCursor(ECC_Visibility, true, Hit);
		}
		HitLocation = Hit.Location;

		// Direct the Pawn towards that location
		APawn* const MyPawn = GetPawn();
		if(MyPawn)
		{
			FVector WorldDirection = (HitLocation - MyPawn->GetActorLocation()).GetSafeNormal();
			MyPawn->AddMovementInput(WorldDirection, 1.f, false);
		}
	}
	else
	{
		FollowTime = 0.f;
	}
    */
}

void AGrave_RobberPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

    /*
	InputComponent->BindAction("SetDestination", IE_Pressed, this, &AGrave_RobberPlayerController::OnSetDestinationPressed);
	InputComponent->BindAction("SetDestination", IE_Released, this, &AGrave_RobberPlayerController::OnSetDestinationReleased);

	// support touch devices 
	InputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AGrave_RobberPlayerController::OnTouchPressed);
	InputComponent->BindTouch(EInputEvent::IE_Released, this, &AGrave_RobberPlayerController::OnTouchReleased);
    */
    
    // support keyboard movement
    InputComponent->BindAxis("MoveForward", this, &AGrave_RobberPlayerController::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &AGrave_RobberPlayerController::MoveRight);

}

/*
void AGrave_RobberPlayerController::OnSetDestinationPressed()
{
	// We flag that the input is being pressed
	bInputPressed = true;
	// Just in case the character was moving because of a previous short press we stop it
	StopMovement();
}

void AGrave_RobberPlayerController::OnSetDestinationReleased()
{
	// Player is no longer pressing the input
	bInputPressed = false;

	// If it was a short press
	if(FollowTime <= ShortPressThreshold)
	{
		// We look for the location in the world where the player has pressed the input
		FVector HitLocation = FVector::ZeroVector;
		FHitResult Hit;
		GetHitResultUnderCursor(ECC_Visibility, true, Hit);
		HitLocation = Hit.Location;

		// We move there and spawn some particles
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, HitLocation);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, HitLocation, FRotator::ZeroRotator, FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
	}
}

void AGrave_RobberPlayerController::OnTouchPressed(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	bIsTouch = true;
	OnSetDestinationPressed();
}

void AGrave_RobberPlayerController::OnTouchReleased(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	bIsTouch = false;
	OnSetDestinationReleased();
}
*/

void AGrave_RobberPlayerController::MoveForward(float Value)
{
    if (Value != 0.0f)
    {
        APawn* const Pawn = GetPawn();
        if (Pawn)
        {
            Pawn->AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
        }
    }
}

void AGrave_RobberPlayerController::MoveRight(float Value)
{
    if (Value != 0.0f)
    {
        APawn* const Pawn = GetPawn();
        if (Pawn)
        {
            Pawn->AddMovementInput(FVector(0.0f, 1.0f, 0.0f), Value);
        }
    }
}

void AGrave_RobberPlayerController::UpdateMouse()
{
    // get pawn pointer
    APawn* const Pawn = GetPawn();

    if (Pawn)
    {
        // Trace to see what is under the mouse cursor
        FHitResult Hit;
        GetHitResultUnderCursor(ECC_Visibility, false, Hit);


        if (Hit.bBlockingHit)
        {
            // construct new vector from pawn's vector coordinates to hit's vector coordinates (mouse location on screen)
            FVector nuVector = Hit.ImpactPoint - Pawn->GetActorLocation();

            // set z-component of vector to 0.0f
            // we only care about the rotation on the zy-plane
            nuVector.Z = 0.0f;

            nuVector.Normalize();

            // convert vector to FRotator
            FRotator nuRotationVect = nuVector.Rotation();

            // update pawn rotation to reflect mouse location
            Pawn->SetActorRotation(nuRotationVect);

        }
    }
}
