// Fill out your copyright notice in the Description page of Project Settings.


#include "CorpseSwordCharacter.h"
#include "Grave_RobberCharacter.h"
#include "Kismet/GameplayStatics.h"

ACorpseSwordCharacter::ACorpseSwordCharacter()
{
	health = 10.0f;
	attackDamage = 10.0f;
	isDead = false;
}

float ACorpseSwordCharacter::TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float actualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	if (actualDamage > 0.0f)
	{
		health -= actualDamage; // reduce health points
		if (health <= 0.0f)
		{
			SetCanBeDamaged(false); // dont allow further damage
			setIsDead(true);
		}
	}

	return actualDamage;
}

// return if character is dead or not
bool ACorpseSwordCharacter::getIsDead()
{
	return isDead;
}

// set boolean variable when character is dead
void ACorpseSwordCharacter::setIsDead(bool dead)
{
	isDead = dead;
}

// attack player and reduce player health
void ACorpseSwordCharacter::attackPlayer()
{
	// get player character
	AGrave_RobberCharacter* playerCharacter = Cast<AGrave_RobberCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	// reduce damage if player exists
	if (playerCharacter)
	{
		playerCharacter->TakeDamage(attackDamage, FDamageEvent(), GetInstigatorController(), this);
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(1, 4.f, FColor::Green, FString::Printf(TEXT("player health: %f"), playerCharacter->getHealth()));
		}
	}
}