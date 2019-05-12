// Fill out your copyright notice in the Description page of Project Settings.

#include "MyAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"









// Maybe Depricated  vvv
//UCLASS (transient, Blueprintable, hideCatagories = AnimInstance, BlueprintType)
//class APP UCustomAnimInstance : public UAnimInstance
//{
//		GENERATED_BODY()
//
//public:
//
//	UPROPERTY(EditAnywhere, BlueprintReadWrite)
//		int MyCustomProp = 0;
//};

void UMyAnimInstance::UpdateMovementSpeed()
{
	APawn* Pawn = TryGetPawnOwner();

	if (Pawn)
	{
		MovementSpeed = Pawn->GetVelocity().Size();
	}
}

void UMyAnimInstance::OnFire()
{
	UE_LOG(LogTemp, Warning, TEXT("Play"));
	//Montage_Play(Finaly);

	UE_LOG(LogTemp, Warning, TEXT("Stop"));

	GLog->Log("//TODO attack moves");
}

//Depricated vv
//void UMyAnimInstance:: UpdateAnimationProperties()
//{
//
//	APawn* Pawn = TryGetPawnOwner();
//
//	if (Pawn)
//	{
//		isAttacking = Pawn->GetMovementComponent()->IsAttacking();
//
//		MovementSpeed = Pawn->GetVelocity().Size();
//
//	}
//}
