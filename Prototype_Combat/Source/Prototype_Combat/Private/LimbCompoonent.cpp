// Fill out your copyright notice in the Description page of Project Settings.

#include "LimbCompoonent.h"

// Sets default values for this component's properties
ULimbCompoonent::ULimbCompoonent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	//BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	////BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	//BoxCollider->SetSimulatePhysics(true);
	//BoxCollider->SetNotifyRigidBodyCollision(true);
	//BoxCollider->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	//BoxCollider->OnComponentHit.AddDynamic(this, &ULimbCompoonent::OnCompHit);
	damage = 5.0f;
	// ...
}


// Called when the game starts
void ULimbCompoonent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULimbCompoonent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void ULimbCompoonent::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
	EnemyStats->_health -= damage;
}

