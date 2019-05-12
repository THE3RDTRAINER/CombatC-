// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPE_COMBAT_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float MovementSpeed;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		UAnimMontage* MeleeAttackMontage;

	UFUNCTION(BlueprintCallable, Category = "AnimationUpdates")
		void UpdateMovementSpeed();


public:
	void OnFire();

};


