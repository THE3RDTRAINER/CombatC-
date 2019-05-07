// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "StatGeneration.h"
#include "LimbBoxComponent.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPE_COMBAT_API ULimbBoxComponent : public UBoxComponent
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	ULimbBoxComponent();


	UPROPERTY(EditDefaultsOnly, Category = "Enemy")
		UStatGeneration* EnemyStats;

	UPROPERTY(EditDefaultsOnly, Category = "Collider")
		UBoxComponent* BoxCollider;
	UPROPERTY(EditDefaultsOnly, Category = "Enemy")
		float damage;

	UFUNCTION()
		void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	
};
