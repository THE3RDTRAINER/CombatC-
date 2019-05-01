// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "StatGeneration.h"
#include "ColliderActor.generated.h"

//#include "Components/SkeletalMeshComponent.h"
UCLASS()
class PROTOTYPE_COMBAT_API AColliderActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AColliderActor();


	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* target;

	UPROPERTY(EditDefaultsOnly)
		UBoxComponent* BoxCollider;

	UFUNCTION()
		void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
