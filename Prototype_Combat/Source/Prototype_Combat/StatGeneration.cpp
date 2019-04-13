// Fill out your copyright notice in the Description page of Project Settings.

#include "StatGeneration.h"
#include <fstream>
#include <string>
#include "Engine.h"

using namespace std; 
//I'm making this reusable. 
int x = 0;
FString sworddata;
string Sworddata;
FString durability; 

//_sharpness, _durablility, and basedmg all need to be called from the sword JSON 

// Sets default values for this component's properties
UStatGeneration::UStatGeneration()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UStatGeneration::BeginPlay()
{
	Super::BeginPlay();

	// ...
	ifstream readSwords;
	readSwords.open("swordsdata.json");
	if (!readSwords.fail())
	{
		while (x <= 19) { //Once again using just a while loop because it
			//getline(readSwords, Sworddata);
			FString sworddata(Sworddata.c_str());
			x++;
			UE_LOG(LogTemp, Log, TEXT("%s"), *sworddata);
			if (sworddata == "\"Durabilitliy\":") {
				getline(readSwords, Sworddata);

				UE_LOG(LogTemp, Log, TEXT("Found durability value!"));
			}

			//UE_LOG(LogTemp, Log, TEXT("Time to read a file"));
		}
		FString durability(FString::FromInt(_durability));
		UE_LOG(LogTemp, Log, TEXT("durablility is %s"), *durability);
	}
}



// Called every frame

void UStatGeneration::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (_health == 0) {
		//AActor::Destroy();  
	}
}

