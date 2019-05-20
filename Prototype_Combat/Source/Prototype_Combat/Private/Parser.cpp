// Fill out your copyright notice in the Description page of Project Settings.

#include "Parser.h"
using namespace std;
// Sets default values for this component's properties
UParser::UParser()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

}


// Called when the game starts
void UParser::BeginPlay()
{
	Super::BeginPlay();
	//FSwordParts parts;
	 UParser::Parsing();
	// ...
//Gets and converts JSON To string
	//const FString JsonFilePath = FPaths::ProjectContentDir() + "/JsonData/sworddata.json";
	//FString JsonString; //Converted
	//FFileHelper::LoadFileToString(JsonString, *JsonFilePath);
	//TSharedPtr<FJsonObject> JsonParsed;

	//string stringjson = string(TCHAR_TO_UTF8(*JsonString));


	//GLog->Log("JSON String: ");
	//GLog->Log(JsonString);
	//FString search = "60";
	//UE_LOG(LogTemp, Log, TEXT("Attempting to run function"));

	//&UJSONReaderComponent::GetParts;

	//E_LOG(LogTemp, Log, TEXT("Function should have run"));


	//This checks for a value, and returns it's index, maybe not super efficent, and incredibly specific.... probably won't work for our needs
	//int32 Find = JsonString.Find(search, ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);


	//FString Found = FString::FromInt(Find);
	//UE_LOG(LogTemp, Log, TEXT("Index 1: %s"), *Found);

	//char& testVal = stringjson.at(50);
	//_blade = testVal - 48;

	//testVal = stringjson.at(83);
	//_crossGuard = testVal - 48;

	//testVal = stringjson.at(111);
	//_hilt = testVal - 48;

	//testVal = stringjson.at(141);
	//_pommel = testVal - 48;

	//testVal = stringjson.at(170);
	//_price = ((testVal - 48) * 10);
	//testVal = stringjson.at(171);
	//_price = _price + (testVal - 48);

	//testVal = stringjson.at(204);
	//_sharpness = ((testVal - 48) * 10);
	//testVal = stringjson.at(205);
	//_sharpness = _sharpness + (testVal - 48);

	//testVal = stringjson.at(240);
	//_durability = ((testVal - 48) * 10);
	//testVal = stringjson.at(241);
	//_durability = _durability + (testVal - 48);
	//FString conversion = FString::FromInt(_price);
	//UE_LOG(LogTemp, Log, TEXT("converted (Method 2) val: %s"), *conversion);

}


// Called every frame
void UParser::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UParser::Parsing( ) {
	const FString JsonFilePath = FPaths::ProjectContentDir() + "/JsonData/sworddata.json";
	FString JsonString; 
	//Converted
	FFileHelper::LoadFileToString(JsonString, *JsonFilePath);
	

	string stringjson = string(TCHAR_TO_UTF8(*JsonString));


	GLog->Log("JSON String: ");
	GLog->Log(JsonString);
	FSwordParts parts;

	char& testVal = stringjson.at(40);
	parts._blade = testVal - 48;

	testVal = stringjson.at(64);
	parts._crossGuard = testVal - 48;

	testVal = stringjson.at(82);
	parts._hilt = testVal - 48;

	testVal = stringjson.at(102);
	parts._pommel = testVal - 48;

	testVal = stringjson.at(121);
	parts._price = ((testVal - 48) * 10);
	testVal = stringjson.at(122);
	parts._price = parts._price + (testVal - 48);

	testVal = stringjson.at(145);
	parts._sharpness = ((testVal - 48) * 10);
	testVal = stringjson.at(146);
	parts._sharpness =parts._sharpness + (testVal - 48);

	testVal = stringjson.at(171);
	parts._durability = ((testVal - 48) * 10);
	testVal = stringjson.at(172);
	parts._durability = parts._durability + (testVal - 48);
	FString conversion = FString::FromInt(parts._price);
	UE_LOG(LogTemp, Log, TEXT("converted (Method 2) val: %s"), *conversion);

}