// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FP_FirstPersonCharacter.h"
#include "GameplayController.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPE_COMBAT_API AGameplayController : public APlayerController
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "Utils")
		void AddItemToInventoryByID(FName ItemID);

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		class AInteractable* CurrentInteractable;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		TArray<FInventoryItem> Inventory;


protected:

	void Interact();

	virtual void SetupInputComponent() override;
};
