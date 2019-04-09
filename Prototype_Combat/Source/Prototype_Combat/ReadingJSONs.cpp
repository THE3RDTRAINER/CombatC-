// Fill out your copyright notice in the Description page of Project Settings.

#include "ReadingJSONs.h"
#include <fstream>
#include <string>

using namespace std;

void writeJSON(string, string, string, string, string, string);

ReadingJSONs::ReadingJSONs()
{
	string sword1;
	ifstream readSwords;
	readSwords.open("swordsdata.JSON"); //SO we need a good dummy data file for me to mess with 

	if (!readSwords.fail())
	{
		while (readSwords)
		{
			UE_LOG (LogTemp, Log, TEXT("File has been parsed"));
			if (sword1 == "Sword_blade_01")
			{
				UE_LOG(LogTemp, Log, TEXT("Found Blade!!")); 
			}
		}
	}


	//swordsdata.close();
	readSwords.close();
}

ReadingJSONs::~ReadingJSONs()
{
}

void writeJSON(string _path, string _blade, string _crossGuard, string _hilt, string _pommel, string _price) {
	ofstream swordsdata;
	swordsdata.open(_path, ios::app);
	swordsdata << "Blade: " << _blade << endl;
	swordsdata << "Crossguard: " << _crossGuard << endl;
	swordsdata << "Hilt: " << _hilt << endl;
	swordsdata << "Pommel: " << _pommel << endl;
	swordsdata << "Price: " << _price << endl;
}