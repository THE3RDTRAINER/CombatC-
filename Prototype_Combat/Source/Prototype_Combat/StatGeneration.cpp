//Copywrite

//Creates and monitors stats

#include "StatGeneration.h"
#include <fstream>
#include <string>
#include "Engine.h"
#include <Runtime/Engine/Classes/GameFramework/Actor.h>


using namespace std;


AActor Destory(AActor);

//_sharpness and _durablility, need to be called from the sword JSON 

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
	
	FHitResult Hit;

	// ...
	//if () {
	//_durability = _durability - 5;
	//}


	if (&UJSONReaderComponenent::_durability == 0) {
		//AActor Destroy(AActor);
	}

}
