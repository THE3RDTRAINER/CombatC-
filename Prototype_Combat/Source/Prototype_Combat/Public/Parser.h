// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
//#include "Json.h"
//#include "JsonSerializerMacros.h"
//#include <Json/Public/Serialization/JsonReader.h>
#include "Engine.h"
#include <string>
#include "UnrealString.h"
//#include "JsonUtilities.h"
#include "Parser.generated.h"

USTRUCT()
struct FSwordParts : public FTableRowBase {
	GENERATED_BODY()
public:

	UPROPERTY(VisibleAnywhere, Category = "Sword parts")
		int _blade = 0;
	UPROPERTY(VisibleAnywhere, Category = "Sword parts")
		int _crossGuard = 0;
	UPROPERTY(VisibleAnywhere, Category = "Sword parts")
		int _hilt = 0;
	UPROPERTY(VisibleAnywhere, Category = "Sword parts")
		int _pommel = 0;

	UPROPERTY(VisibleAnywhere, Category = "Sword parts")
		int _price = 0;

	UPROPERTY(VisibleAnywhere, Category = "Sword parts")
		int _durability = 0;

	UPROPERTY(VisibleAnywhere, Category = "Sword parts")
		int _sharpness = 0;

};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROTOTYPE_COMBAT_API UParser : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UParser();
	
	UFUNCTION()
		void Parsing();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
