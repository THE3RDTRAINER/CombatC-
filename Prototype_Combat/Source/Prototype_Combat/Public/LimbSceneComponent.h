// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "StatGeneration.h"
#include "LimbSceneComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROTOTYPE_COMBAT_API ULimbSceneComponent : public USceneComponent
{
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, Category = "Enemy")
		UStatGeneration* EnemyStats;

	UPROPERTY(EditDefaultsOnly, Category = "Collider")
		UBoxComponent* BoxCollider;
	UPROPERTY(EditDefaultsOnly, Category = "Enemy")
		float damage;

	UFUNCTION()
		void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

public:	
	// Sets default values for this component's properties
	ULimbSceneComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
