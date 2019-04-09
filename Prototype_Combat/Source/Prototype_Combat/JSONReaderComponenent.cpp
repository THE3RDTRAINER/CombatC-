// Fill out your copyright notice in the Description page of Project Settings.

#include "JSONReaderComponenent.h"
#include <fstream>
#include <string>
#include <iostream>
#include "KismetSystemLibrary.generated.h"


//#include "CoreUObject.h"

using namespace std;
//string GetSwordParts(string, fstream, string, string, string);
string _blade;
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
	ifstream readSwords;
	readSwords.open("swordsdata.JSON");
	string sword1;
	string swordpart;
	string parttofind= "\"Blade\":";
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

	//UE_LOG(LogTemp, Log, TEXT("File can be read!"));
	while (getline(readSwords, sword1)) {
		//string GetSwordParts(string sword1, ifstream readSwords,string swordpart, string parttofind, string _blade);
		//if (sword1 == "\"Blade\":") {
			//getline(readSwords, swordpart);
			//blade=swordpart;
			//UE_LOG(LogTemp, Log, TEXT("Found blade!"));
		//}
	}

	if (_blade== swordpart) {
	
		UE_LOG(LogTemp, Log, TEXT("Found blade!"));
		
	}
	//ofstream swordsdata;
	//swordsdata.open("Swordsdata.txt", ios::app); //Not sure if he wants to append or 
	//swordsdata << "Blade: " << _blade << endl;
	//swordsdata.close();
	readSwords.close();


	}


// Called every frame
void UJSONReaderComponenent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
/*
string GetSwordParts( string sword1, ifstream readSwords,string parttofind, string swordpart, string part ) {
	if (sword1 == parttofind)
	{
		getline(readSwords, swordpart);
		part = swordpart;
		return part, swordpart;

	}

}*/