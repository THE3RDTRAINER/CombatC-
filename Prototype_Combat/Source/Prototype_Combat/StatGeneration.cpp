//Copywrite

//Creates and monitors stats

#include "StatGeneration.h"
#include <fstream>
#include <string>
#include "Engine.h"
#include <Runtime/Engine/Classes/GameFramework/Actor.h>


using namespace std;



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
	
}



// Called every frame

void UStatGeneration::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	

}
