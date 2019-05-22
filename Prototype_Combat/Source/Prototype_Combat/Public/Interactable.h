// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interactable.generated.h"

UCLASS()
class PROTOTYPE_COMBAT_API AInteractable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractable();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*
	The function that is called when the the player interacts with the interactable
	this function is marked as BlueprintImplementable se that deisigners
	may implement whatever custom functionatlity they want in bluyeprints.
	*/
	UFUNCTION(BlueprintImplementableEvent)
		void Interact(APlayerController* Controller);

	UPROPERTY(EditDefaultsOnly)
		FString Name;

	UPROPERTY(EditDefaultsOnly)
		FString Action;

	UPROPERTY(EditDefaultsOnly)
		FString Sharpness;

	UPROPERTY(EditDefaultsOnly)
		FString Durability;

	UFUNCTION(BlueprintCallable, Category = "Pickup")
		FString GetUseText() const { return FString::Printf(TEXT("%s : Press E to %s"), *Name, *Action); }

};
