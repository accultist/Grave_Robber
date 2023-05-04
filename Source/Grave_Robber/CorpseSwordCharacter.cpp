// Fill out your copyright notice in the Description page of Project Settings.


#include "CorpseSwordCharacter.h"
#include "Grave_RobberCharacter.h"
#include "Kismet/GameplayStatics.h"

ACorpseSwordCharacter::ACorpseSwordCharacter()
{
	attackDamage = 10.0f;
	isDead = false;
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
	}
}