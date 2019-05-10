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

	// ...
			//Gets and converts JSON To string
	const FString JsonFilePath = FPaths::ProjectContentDir() + "/JsonData/swordData.JSON";
	FString JsonString; //Converted
	FFileHelper::LoadFileToString(JsonString, *JsonFilePath);
	//TSharedPtr<FJsonObject> JsonParsed;

	
	GLog->Log("JSON String: ");
	GLog->Log(JsonString);
	FString search = "0";
	string stringjson = string(TCHAR_TO_UTF8(*JsonString));
	
	//FString search = "0";
	//This checks for a value, and returns it's index, maybe not super efficent, and incredibly specific.... probably won't work for our needs
	int32 Find = JsonString.Find(search, ESearchCase::IgnoreCase, ESearchDir::FromStart, 0);
	/*FString Found = FString::FromInt(Find);
	UE_LOG(LogTemp, Log, TEXT("%s"), *Found);*/

	//Converts the index to it's int equivallent 

	int32 Locate = Find;

	char& objecttofind = stringjson.at(Locate);
	int part = objecttofind - 48;

	//Checking to see if it was sucessful. 
	if (part == 0) {
		UE_LOG(LogTemp, Log, TEXT("Worked!"));
	}
	else {
		UE_LOG(LogTemp, Log, TEXT("FAiled!"));
	}
}


// Called every frame
void UParser::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

