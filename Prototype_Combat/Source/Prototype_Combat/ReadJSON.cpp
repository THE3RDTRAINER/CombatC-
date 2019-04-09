// Fill out your copyright notice in the Description page of Project Settings.

#include "ReadJSON.h"
#include <fstream>
#include <string>

using namespace std;
//void writeJSON(string, string, string, string, string, string);
// Sets default values
AReadJSON::AReadJSON()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AReadJSON::BeginPlay()
{
	Super::BeginPlay();

	//ofstream swordsdata;
	//swordsdata.open("swordsdata.JSON", ios::app);
	string sword1;
	ifstream readSwords;
	readSwords.open("swordsdata.JSON"); //SO we need a good dummy data file for me to mess with 

	if (!readSwords.fail())
	{
		//while (readSwords)
		//{
			UE_LOG(LogTemp, Log, TEXT("File has been parsed"));
			if (sword1 == "Sword_blade_01")
			{
				UE_LOG(LogTemp, Log, TEXT("Found Blade!!"));
			}
		//}
	}
	else {
		UE_LOG(LogTemp, Log, TEXT("Read Has failed"));
	}
	//swordsdata.close();
	readSwords.close();
	
}

// Called every frame
void AReadJSON::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/*
void writeJSON(string _path, string _blade, string _crossGuard, string _hilt, string _pommel, string _price) {
	ofstream swordsdata;
	swordsdata.open(_path, ios::app);
	swordsdata << "Blade: " << _blade << endl;
	swordsdata << "Crossguard: " << _crossGuard << endl;
	swordsdata << "Hilt: " << _hilt << endl;
	swordsdata << "Pommel: " << _pommel << endl;
	swordsdata << "Price: " << _price << endl;
}*/