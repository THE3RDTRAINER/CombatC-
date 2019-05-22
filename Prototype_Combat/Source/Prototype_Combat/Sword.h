// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "Sword.generated.h"

UCLASS()
class PROTOTYPE_COMBAT_API ASword : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASword(const FObjectInitializer& OI);

	//Components
	UStaticMeshComponent* Blade;
	UStaticMeshComponent* Handle;
	UStaticMeshComponent* CrossGuard;
	UStaticMeshComponent* Pommel;
	UPROPERTY(EditDefaultsOnly, Category = "Sword")
	UStaticMeshComponent* UnsharpenedMesh;
	UPROPERTY(EditDefaultsOnly, Category = "Sword")
	UBoxComponent* BoxCollider;
	UPROPERTY(EditDefaultsOnly, Category = "Sword")
	UArrowComponent* Arrow;





	UPROPERTY(EditDefaultsOnly,Category = "Sword")
	UDataTable* BladesData;
	
	UPROPERTY(EditDefaultsOnly,Category = "Sword")
	UDataTable* HandlesData;

	UPROPERTY(EditDefaultsOnly, Category = "Sword")
	UDataTable* CrossGuardsData;

	UPROPERTY(EditDefaultsOnly,Category = "Sword")
	UDataTable* PommelsData;

	


	UPROPERTY(EditDefaultsOnly, Category = "Sword")
	int BladeIndex;

	UPROPERTY(EditDefaultsOnly, Category = "Sword")
	int HandleIndex;

	UPROPERTY(EditDefaultsOnly, Category = "Sword")
	int CrossGuardIndex;

	UPROPERTY(EditDefaultsOnly, Category = "Sword")
	int PommelIndex;

	UPROPERTY(EditDefaultsOnly, Category = "Sword")
	UMaterialInterface* RustMaterial;


	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Sword")
	bool CanPickup = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Sword")
	int Sharpness;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Sword")
	int Durability;


	bool Sharpened;
	bool Hammered;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Sword")
	void BuildSword(int Bladei, int Handlei, int CrossGuardi, int Pommeli);
	UFUNCTION(BlueprintCallable, Category = "Sword")
	void Hammer(int QTDurability);
	UFUNCTION(BlueprintCallable, Category = "Sword")
	void Sharpen(int QTSharpness);
};
