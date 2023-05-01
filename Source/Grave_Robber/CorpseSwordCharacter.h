// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCharacter.h"
#include "CorpseSwordCharacter.generated.h"

/**
 * 
 */
UCLASS()
class GRAVE_ROBBER_API ACorpseSwordCharacter : public AEnemyCharacter
{
	GENERATED_BODY()

public:
	// constructor
	ACorpseSwordCharacter();

	// override TakeDamage
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	// getter and setters to check if character is dead
	UFUNCTION(BlueprintCallable, Category = "C++ Functions")
		bool getIsDead();
	void setIsDead(bool dead);

	// attack player
	UFUNCTION(BlueprintCallable, Category = "C++ Functions")
		void attackPlayer();

protected:
	UPROPERTY(EditAnywhere)
		float health;

	UPROPERTY(EditAnywhere)
		float attackDamage;

private:
	bool isDead;
};
