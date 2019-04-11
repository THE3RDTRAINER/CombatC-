// Fill out your copyright notice in the Description page of Project Settings.

#include "StatGeneration.h"
#include <fstream>
#include <string>

using namespace std; 

int _durability;
int _sharpness;
int _health;
int _baseDmg;
string sworddata;


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
		getline(readSwords, sworddata);

	}


}


// Called every frame
void UStatGeneration::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

