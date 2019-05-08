// Fill out your copyright notice in the Description page of Project Settings.

#include "LimbSceneComponent.h"

// Sets default values for this component's properties
ULimbSceneComponent::ULimbSceneComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bCanEverTick = true;
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	//BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	BoxCollider->SetSimulatePhysics(true);
	BoxCollider->SetNotifyRigidBodyCollision(true);
	BoxCollider->SetupAttachment(GetAttachmentRoot());
	BoxCollider->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	BoxCollider->OnComponentHit.AddDynamic(this, &ULimbSceneComponent::OnCompHit);
	damage = 5.0f;
	// ...
}


// Called when the game starts
void ULimbSceneComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void ULimbSceneComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
void ULimbSceneComponent::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
	EnemyStats->_health -= damage;
}

