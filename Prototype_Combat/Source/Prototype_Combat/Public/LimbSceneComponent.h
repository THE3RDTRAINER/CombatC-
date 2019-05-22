// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasicEnemy.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "StatGeneration.h"
#include "Sword.h"
#include "LimbSceneComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROTOTYPE_COMBAT_API ULimbSceneComponent : public USceneComponent
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, Category = "Limb")
		UStatGeneration* EnemyStats;
	UPROPERTY(EditAnywhere, Category = "Limb")
		UBoxComponent* BoxCollider;
	UPROPERTY(EditAnywhere, Category = "Limb")
		float damage;

	UFUNCTION()
		void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

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
