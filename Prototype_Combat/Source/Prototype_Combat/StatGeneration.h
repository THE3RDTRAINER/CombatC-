// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "JSONReaderComponenent.h"
#include "StatGeneration.generated.h"


UCLASS(ClassGroup = "Custom", hidecategories = (Object, LOD, Lighting, TextureStreaming), editinlinenew, meta = (DisplayName = "Stat Generation", BlueprintSpawnableComponent))
//UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROTOTYPE_COMBAT_API UStatGeneration : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UStatGeneration();


	UPROPERTY(EditAnywhere)
		int _durability = 20;
	UPROPERTY(EditAnywhere)
		int _sharpness=20;
	UPROPERTY(EditAnywhere)
		int _health=60;
	UPROPERTY(EditAnywhere)
		int damageModifier;
	UPROPERTY(EditAnywhere)
		int goldDropped=10;
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
