// Copyright Epic Games, Inc. All Rights Reserved.

#include "Grave_RobberCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/DecalComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

AGrave_RobberCharacter::AGrave_RobberCharacter()
{
	// Set size for player capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate character to camera direction
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	// Create a camera boom...
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Don't want arm to rotate when character does
	CameraBoom->TargetArmLength = 800.f;
	CameraBoom->SetRelativeRotation(FRotator(-60.f, 0.f, 0.f));
	CameraBoom->bDoCollisionTest = false; // Don't want to pull camera in when it collides with level

	// Create a camera...
	TopDownCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TopDownCamera"));
	TopDownCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	TopDownCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Activate ticking in order to update the cursor every frame.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	maxHealth = 100.0f;
    baseAttackDamage = 10.0f;
	currentHealth = maxHealth;
	attackDamage = baseAttackDamage;
	isDead = false;
}

void AGrave_RobberCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
}

float AGrave_RobberCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float actualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	if (actualDamage > 0.0f)
	{
		currentHealth -= actualDamage;

		if (currentHealth <= 0.0f)
		{
			// character is dead
			SetCanBeDamaged(false); // don't allow further damage
			setIsDead(true);

			// disable inputs
			APlayerController* playerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
			if (playerController)
			{
				playerController->SetIgnoreLookInput(true);
				playerController->SetIgnoreMoveInput(true);
			}
		}
	}
	
	return actualDamage;
}

bool AGrave_RobberCharacter::getIsDead()
{
	return isDead;
}

void AGrave_RobberCharacter::setIsDead(bool dead)
{
	isDead = dead;
}

float AGrave_RobberCharacter::getCurrentHealth()
{
	return currentHealth;
}

void AGrave_RobberCharacter::addToCurrentHealth(float value)
{
	currentHealth += value;

	if (currentHealth > maxHealth)
	{
		currentHealth = maxHealth;
	}
}

float AGrave_RobberCharacter::getMaxHealth()
{
	return maxHealth;
}

void AGrave_RobberCharacter::addToMaxHealth(float value)
{
	maxHealth += value;
}

float AGrave_RobberCharacter::getDamage() {
    return attackDamage;
}

void AGrave_RobberCharacter::boostDamage(float value) {
    attackDamage += value;
}
