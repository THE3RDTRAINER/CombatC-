// Fill out your copyright notice in the Description page of Project Settings.

#include "LimbBoxComponent.h"

ULimbBoxComponent::ULimbBoxComponent()
{
	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collider"));
	BoxCollider->SetSimulatePhysics(true);
	BoxCollider->SetNotifyRigidBodyCollision(true);
	BoxCollider->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	BoxCollider->OnComponentHit.AddDynamic(this, &ULimbBoxComponent::OnCompHit);
	damage = 5.0f;



	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	
}
void ULimbBoxComponent::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
	//For collision purposes
}