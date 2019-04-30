// Fill out your copyright notice in the Description page of Project Settings.

#include "BasicEnemy.h"

// Sets default values
ABasicEnemy::ABasicEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
/*
	target = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("target"));
	target->SetupAttachment(RootComponent);

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxCollider->SetupAttachment(target);
	BoxCollider->SetSimulatePhysics(true);
	BoxCollider->SetNotifyRigidBodyCollision(true);
	BoxCollider->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	BoxCollider->OnComponentHit.AddDynamic(this, &ABasicEnemy::OnCompHit); */
	}



// Called when the game starts or when spawned
void ABasicEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasicEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

/*
void OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//if (Health > 0) {
	UE_LOG(LogTemp, Log, TEXT("HIT!"));
	/*Health = Health - damage;
}
if (Health == 0) {
	UE_LOG(LogTemp, Log, TEXT("Should be dead"));
}*/
//}  