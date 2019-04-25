// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <Runtime/Json/Public/Json.h>
#include "JSONReaderComponenent.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROTOTYPE_COMBAT_API UJSONReaderComponenent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UJSONReaderComponenent();



protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
UCLASS()
class USwordStats : public UJSONReaderComponenent {

	GENERATED_BODY()
public: 
	int  _blade;

	int _crossGuard;

	static int _durability; 
};

USTRUCT()
struct FSword
{

	
	GENERATED_BODY()

public:
	UPROPERTY()
	FString blade;

	UPROPERTY()
	FString crossGuard;

	UPROPERTY()
	FString hilt;

	UPROPERTY()
	FString pommel;

	UPROPERTY()
	int16 price;

	UPROPERTY()
	int16 durability;

	UPROPERTY()
	int16 sharpness;


};