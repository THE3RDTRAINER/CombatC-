// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Json.h"
#include "JsonSerializerMacros.h"
#include <Json/Public/Serialization/JsonReader.h>
#include "Engine.h"
#include <string>
#include "UnrealString.h"
#include "Parser.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROTOTYPE_COMBAT_API UParser : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UParser();
	UPROPERTY()
		int _blade;
	UPROPERTY()
		int _crossGuard;
	UPROPERTY()
		int _hilt;
	UPROPERTY()
		int _pommel;

	UPROPERTY()
		int _price;

	UPROPERTY()
		int _durability;

	UPROPERTY()
		int _sharpness;



protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
