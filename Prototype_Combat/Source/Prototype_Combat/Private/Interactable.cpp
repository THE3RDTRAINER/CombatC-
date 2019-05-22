// Fill out your copyright notice in the Description page of Project Settings.

#include "Interactable.h"
#include "Prototype_Combat.h"

// Sets default values
AInteractable::AInteractable()
{
	Name = "Name not set";
	Action = "Interact";
	Sharpness = "64";
	Durability = "64";
}
// Called when the game starts or when spawned
void AInteractable::BeginPlay()
{
	Super::BeginPlay();
	
}


