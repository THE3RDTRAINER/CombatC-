// Fill out your copyright notice in the Description page of Project Settings.

#include "JSONReaderComponenent.h"
#include <fstream>
#include <string>
#include <iostream>
#include <Runtime/Json/Public/Serialization/JsonReader.h>
#include <Json/Public/Json.h>
#include <Runtime/Json/Public/Serialization/JsonSerializerMacros.h>
#include "CoreUObject.h"
using namespace std;

//void GetSwordParts(string, fstream, string, string, string );

ifstream readSwords;
string sword1;
string swordpart;
string parttofind = "\"Blade\":";

int8 i=0;

// Sets default values for this component's properties
UJSONReaderComponenent::UJSONReaderComponenent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UJSONReaderComponenent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	readSwords.open("swordsdata.JSON");
	
	if (readSwords.fail())
	{
		UE_LOG(LogTemp, Log, TEXT("Read Has failed"));
		
		//ConstructorHelpers::FObjectFinder <UStaticMesh> newAsset(TEXT("\Content\ModularWeapons\Meshes\Swords\Blades\Sword_Blade_01.uasset"));
		void QuitGame
		(
			UObject * WorldContextObject,
			class APlayerController * SpecificPlayer,
			//TEnumAsByte < EQuitPreference::Type > Quit,
			bool bIgnorePlatformRestrictions
		);

	}
	else {	UE_LOG(LogTemp, Log, TEXT("File can be read!"));
		
	}
	//FString test;
	//FSword sword;
	//if (!FJsonObjectConverter::JsonObjectStringToUStruct(test, &sword, 0, 0))
	//{

	//}

	//UE_LOG(LogTemp, Log, TEXT("File can be read!"));
	//while (getline(readSwords, sword1)) {
		// void GetSwordParts(string sword1, ifstream readSwords,string swordpart, string parttofind, string& _blade);
		
	

/*	if (_blade== "\"Sword_Blade_01\",") {
	
		UE_LOG(LogTemp, Log, TEXT("Found blade!"));
		//_Blade =_blade.erase(_blade.begin(), _blade.end()-1, _blade.end());
		//static ConstructorHelpers::FObjectFinder<UStaticMesh> blade("\Content\ModularWeapons\Meshes\Swords\Blades"+_Blade +".uasset");
	
	}
	if (_crossGuard == "\"Sword_Crossguard_01\",") {
		UE_LOG(LogTemp, Log, TEXT("Found crossguard!"));
	}*/
	//bool FromJson (_Blade && "swordsdata.JSON");
	//swordsdata.close();
	readSwords.close();


	}


// Called every frame
void UJSONReaderComponenent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	if (i >= 16) {
		getline(readSwords, sword1);
		if (sword1 == "\"Blade\":") {
			//getline(readSwords, swordpart);
			//_blade=swordpart;
			UE_LOG(LogTemp, Log, TEXT("Found blade!"));
		}
		UE_LOG(LogTemp, Log, TEXT("READING"));
		//parttofind = "\"Crossguard\":";
		//void GetSwordParts(string sword1, ifstream readSwords, string swordpart, string parttofind, string& _crossGaurd);
		i++;
	}

}

void GetSwordParts(string sword1, ifstream readSwords, string parttofind, string swordpart, string part) {
	if (sword1 == parttofind)
	{
		getline(readSwords, swordpart);
		part = swordpart;
		//return sword1, readSwords, parttofind, part, swordpart;
		UE_LOG(LogTemp, Log, TEXT("Function works"));
	}
}