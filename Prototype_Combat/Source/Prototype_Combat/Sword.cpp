// Fill out your copyright notice in the Description page of Project Settings.

#include "Sword.h"
#include"SwordPartsData.h" 
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMeshActor.h"
#include "Engine/StaticMesh.h"
// Sets default values
ASword::ASword(const FObjectInitializer& OI)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Arrow = OI.CreateDefaultSubobject<UArrowComponent>(this, FName("ArrowRoot"));
	SetRootComponent(Arrow);
	CanPickup = true;
	

	Blade = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Blade"));
	Blade->SetupAttachment(GetRootComponent());
	Blade->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Handle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Handel"));
	Handle->SetupAttachment(GetRootComponent());
	Handle->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	CrossGuard = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CrossGuard"));
	CrossGuard->SetupAttachment(GetRootComponent());
	CrossGuard->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	Pommel = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pommel"));
	Pommel->SetupAttachment(GetRootComponent());
	Pommel->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	UnsharpenedMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UnSharpenedBlade"));
	UnsharpenedMesh->SetupAttachment(GetRootComponent());
	UnsharpenedMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxCollider->SetupAttachment(GetRootComponent());

	
}

// Called when the game starts or when spawned
void ASword::BeginPlay()
{
	Super::BeginPlay();
	Pommel->SetRelativeLocation(FVector(0, 0, 0));
	Handle->SetRelativeLocation(FVector(0, 0, 0));
	CrossGuard->SetRelativeLocation(FVector(0, 0, 0));
	//BoxCollider->SetRelativeLocation(FVector(0, 0, 0));
}

// Called every frame
void ASword::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASword::BuildSword(int Bladei, int Handlei, int CrossGuardi, int Pommeli)
{
	BladeIndex = Bladei;
	HandleIndex = Handlei;
	CrossGuardIndex = CrossGuardi;
	PommelIndex = Pommeli;

	FName RowName = FName(*FString::FromInt(Bladei));
	FSwordPart* FoundRow = BladesData->FindRow<FSwordPart>(RowName, FString("OH NO"));	
	if(FoundRow!=nullptr)Blade->SetStaticMesh(FoundRow->Mesh);

	RowName = FName(*FString::FromInt(Handlei));
	FoundRow = HandlesData->FindRow<FSwordPart>(RowName, FString("OH NO"));
	if (FoundRow != nullptr)Handle->SetStaticMesh(FoundRow->Mesh);

	RowName = FName(*FString::FromInt(CrossGuardi));
	FoundRow = CrossGuardsData->FindRow<FSwordPart>(RowName, FString("OH NO"));
	if (FoundRow != nullptr)CrossGuard->SetStaticMesh(FoundRow->Mesh);

	RowName = FName(*FString::FromInt(Pommeli));
	FoundRow = PommelsData->FindRow<FSwordPart>(RowName, FString("OH NO"));
	if (FoundRow != nullptr)Pommel->SetStaticMesh(FoundRow->Mesh);

	//hide the blade and replace it with a unhammered one
	//Add a rusty material to everything
	Blade->SetHiddenInGame(true);
	Blade->SetMaterial(0, RustMaterial);
	Handle->SetMaterial(0, RustMaterial);
	CrossGuard->SetMaterial(0, RustMaterial);
	Pommel->SetMaterial(0, RustMaterial);
}

void ASword::Hammer(int QTDurability)
{
	Durability = QTDurability;
	Hammered = true;
	Blade->SetHiddenInGame(false);
	UnsharpenedMesh->SetHiddenInGame(true);
}

void ASword::Sharpen(int QTSharpness)
{
	Sharpness = QTSharpness;
	Sharpened = true;	
	Blade->SetMaterial(0, Blade->GetStaticMesh()->GetMaterial(0));
	Handle->SetMaterial(0, Handle->GetStaticMesh()->GetMaterial(0));
	CrossGuard->SetMaterial(0, CrossGuard->GetStaticMesh()->GetMaterial(0));
	Pommel->SetMaterial(0, Pommel->GetStaticMesh()->GetMaterial(0));
}
