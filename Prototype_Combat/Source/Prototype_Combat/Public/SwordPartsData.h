// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SwordPartsData.generated.h"

USTRUCT(BlueprintType)
struct FSwordPart : public FTableRowBase
{

	GENERATED_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMesh* Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 IronAMT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 GoldAMT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 SteelAMT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 GemAMT;
};


/**
 * 
 */
UCLASS()
class PROTOTYPE_COMBAT_API USwordPartsData : public UDataTable
{
	GENERATED_BODY()
	
};
