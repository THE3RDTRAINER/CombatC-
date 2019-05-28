// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "sword.h"
#include "Parser.h"
#include "SwordSpawner.generated.h"

UCLASS()
class PROTOTYPE_COMBAT_API ASwordSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwordSpawner();
	UFUNCTION(BlueprintCallable)
		void GetSword();
	UPROPERTY(EditAnywhere, Category = Furnace)
		UParser* parse;
	UPROPERTY(EditDefaultsOnly, Category = Furnace)
		TSubclassOf<ASword> sword;
	UPROPERTY(EditDefaultsOnly, Category = Furnace)
		USceneComponent* SwordPos;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
