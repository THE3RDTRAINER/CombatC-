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
	//BoxCollider->SetSimulatePhysics(true);

	BoxCollider->SetNotifyRigidBodyCollision(true);
	BoxCollider->SetupAttachment(GetAttachmentRoot());
	BoxCollider->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &ULimbSceneComponent::OnOverlapBegin);
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
void ULimbSceneComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
	if (Cast<ASword>(OtherActor)) {
		UE_LOG(LogTemp, Log, TEXT("I am taking damage!"));
		EnemyStats->_health -= damage;
	}
	else {
		UE_LOG(LogTemp, Log, TEXT("I hit %s"), *OtherActor->GetName());
	}
	
}

