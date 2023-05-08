// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Grave_RobberCharacter.generated.h"

UCLASS(Blueprintable)
class AGrave_RobberCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AGrave_RobberCharacter();

	// Called every frame.
	virtual void Tick(float DeltaSeconds) override;

	/** Returns TopDownCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetTopDownCameraComponent() const { return TopDownCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	// override TakeDamage
	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	// getter and setters to check if character is dead
	UFUNCTION(BlueprintCallable, Category = "C++ Functions")
		bool getIsDead();
	void setIsDead(bool dead);

	UFUNCTION(BlueprintCallable, Category = "C++ Functions")
		float getCurrentHealth();

	UFUNCTION(BlueprintCallable, Category = "C++ Functions")
		void addToCurrentHealth(float value);

	UFUNCTION(BlueprintCallable, Category = "C++ Functions")
		float getMaxHealth();

	UFUNCTION(BlueprintCallable, Category = "C++ Functions")
		void addToMaxHealth(float value);

protected:
	UPROPERTY(EditAnywhere)
		float maxHealth;

	float currentHealth;

	UPROPERTY(EditAnywhere)
		float attackDamage;

private:
	/** Top down camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* TopDownCameraComponent;

	/** Camera boom positioning the camera above the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	bool isDead;
};

