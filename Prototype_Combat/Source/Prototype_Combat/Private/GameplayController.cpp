// Fill out your copyright notice in the Description page of Project Settings.

#include "GameplayController.h"
#include "Interactable.h"
#include "InventoryGamemode.h"
#include "../FP_FirstPerson/FP_FirstPersonCharacter.h"
#include "Prototype_Combat.h"

void AGameplayController::SetupInputComponent()
{

	Super::SetupInputComponent();

	InputComponent->BindAction("Use", IE_Pressed, this, &AGameplayController::Interact);

}

void AGameplayController::Interact()
{
	if (CurrentInteractable)
	{

		CurrentInteractable->Interact(this);

	}


}

void AGameplayController::AddItemToInventoryByID(FName ID)
{

	AInventoryGamemode* GameMode = Cast<AInventoryGamemode>(GetWorld()->GetAuthGameMode());
	UDataTable* ItemTable = GameMode->GetItemDB();

	//FInventoryItem* ItemToAdd = ItemTable->FindRow<FInventoryItem>(ID, "");

	/*if (ItemToAdd)
	{
		Inventory.Add(*ItemToAdd);
	}*/
}

