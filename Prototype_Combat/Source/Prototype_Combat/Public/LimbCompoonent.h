// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatGeneration.h"
#include "Components/ActorComponent.h"
#include "Components/BoxComponent.h"
#include "LimbCompoonent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PROTOTYPE_COMBAT_API ULimbCompoonent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	ULimbCompoonent();

	UPROPERTY(EditDefaultsOnly, Category = "Enemy")
		UStatGeneration* EnemyStats;

	UPROPERTY(EditDefaultsOnly, Category = "Collider")
		UBoxComponent* BoxCollider;
	UPROPERTY(EditDefaultsOnly, Category = "Enemy")
		float damage;

	UFUNCTION()
		void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
protected:

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


};
