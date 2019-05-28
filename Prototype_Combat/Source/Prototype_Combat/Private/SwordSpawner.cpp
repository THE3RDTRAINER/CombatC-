// Fill out your copyright notice in the Description page of Project Settings.

#include "SwordSpawner.h"

// Sets default values
ASwordSpawner::ASwordSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Spawns in the parser component
	parse = CreateDefaultSubobject<UParser>(TEXT("Parser"));
	//Where the sword will be spawned
	//The position where the sword will be spawned, probably needs some tweaking because it's the root currently
	SwordPos = CreateDefaultSubobject<USceneComponent>(TEXT("Pos"));
	SwordPos->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ASwordSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASwordSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Instaniate the sword with the JSON reader

void ASwordSpawner::GetSword() {
	//Runs the parsing function which then gets the JSON data
	parse->Parsing();
	FActorSpawnParameters SpawnInfo;
	//Spawns the sword in the world
	ASword* spawnSword = GetWorld()->SpawnActor<ASword>(sword, SwordPos->GetComponentLocation(), SwordPos->GetComponentRotation(), SpawnInfo);
	//Gives the sword the necessary indicies and changes the meshs based on em
	spawnSword->BuildSword(parse->parts._blade, parse->parts._hilt, parse->parts._crossGuard, parse->parts._pommel);
}

