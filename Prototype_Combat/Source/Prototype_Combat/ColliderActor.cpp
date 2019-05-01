// Fill out your copyright notice in the Description page of Project Settings.

#include "ColliderActor.h"





// Sets default values
AColliderActor::AColliderActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	target = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("target"));
	target->SetupAttachment(RootComponent);

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxCollider->SetupAttachment(target);
	BoxCollider->SetSimulatePhysics(true);
	BoxCollider->SetNotifyRigidBodyCollision(true);
	BoxCollider->BodyInstance.SetCollisionProfileName("PhysicsActor");
	BoxCollider->OnComponentHit.AddDynamic(this, &AColliderActor::OnCompHit);
}

// Called when the game starts or when spawned
void AColliderActor::BeginPlay()
{
	Super::BeginPlay();


}
// Called every frame
void AColliderActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}
//Make a function with a the damage and health stats

void AColliderActor::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
	//if (Health > 0) {
	UE_LOG(LogTemp, Log, TEXT("HIT!"));

	/*Health = Health - damage;
}
if (Health == 0) {
	UE_LOG(LogTemp, Log, TEXT("Should be dead"));
}*/
}  
