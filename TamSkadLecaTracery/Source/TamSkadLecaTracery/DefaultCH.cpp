// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultCH.h"
#include "UE4ManACPP.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Controller.h"
#include "Engine/World.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/Actor.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ADefaultCH::ADefaultCH()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;	
}

// Called when the game starts or when spawned
void ADefaultCH::BeginPlay()
{
	Super::BeginPlay();
}


void ADefaultCH::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}


/////////setup////////////
void ADefaultCH::SetupVariables(UAnimInstance* Ref)
{
	ABPRef = Ref;
}


///////end of setup///////


// Called to bind functionality to input
void ADefaultCH::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MovForBack", this, &ADefaultCH::MoveForBackCallback);
	PlayerInputComponent->BindAxis("MovLeftRight", this, &ADefaultCH::MoveRightLeftCallback);
	PlayerInputComponent->BindAxis("MovCamX", this, &ADefaultCH::MoveCamXCallback);
	PlayerInputComponent->BindAxis("MovCamY", this, &ADefaultCH::MoveCamYCallback);
}

FRotator ADefaultCH::GetYawRotation()
{
	FRotator rotation = GetControlRotation();
	return UKismetMathLibrary::MakeRotator(0.f, 0.f, rotation.Yaw);
}

void ADefaultCH::MoveForBackCallback(float AxisValue)
{
	auto worldDirection = UKismetMathLibrary::GetForwardVector(GetYawRotation());
	float scale = UKismetMathLibrary::SignOfFloat(AxisValue);
	AddMovementInput(worldDirection, scale);
}

void ADefaultCH::MoveRightLeftCallback(float AxisValue)
{
	auto worldDirection = UKismetMathLibrary::GetRightVector(GetYawRotation());
	float scale = UKismetMathLibrary::SignOfFloat(AxisValue);
	AddMovementInput(worldDirection, scale);
}

void ADefaultCH::MoveCamXCallback(float AxisValue)
{
	AddControllerYawInput(AxisValue);
}

void ADefaultCH::MoveCamYCallback(float AxisValue)
{
	AddControllerPitchInput(-AxisValue);
	UpdateYRot();
}
//canBeSeenFrom method for Ai perception sight 
bool ADefaultCH::CanBeSeenFrom(const FVector& ObserverLocation,
	FVector& OutSeenLocation,
	int32& NumberOfLoSChecksPerformed,
	float& OutSightStrength,
	const AActor* IgnoreActor,
	const bool* bWasVisible,
	int32* UserData) const
{
	static const FName NAME_AILineOfSight = FName(TEXT("TestPawnLineOfSight"));
	FHitResult HitResult;
	auto sockets = GetMesh()->GetAllSocketNames();
	//Here we consider the NeckSocket as the 
	FVector socketLocation = GetMesh()->GetSocketLocation("head");

	const bool bHitSocket = GetWorld()->LineTraceSingleByObjectType(HitResult, ObserverLocation, socketLocation, FCollisionObjectQueryParams(ECC_TO_BITFIELD(ECC_WorldStatic) | ECC_TO_BITFIELD(ECC_WorldDynamic)), FCollisionQueryParams(NAME_AILineOfSight, true, IgnoreActor));
	NumberOfLoSChecksPerformed++;
	if (bHitSocket == false || (HitResult.Actor.IsValid() && HitResult.Actor->IsOwnedBy(this)))
	{
		OutSeenLocation = socketLocation;
		OutSightStrength = 1;
		return true;
	}
	const bool bHit = GetWorld()->LineTraceSingleByObjectType(HitResult, ObserverLocation, GetActorLocation(), FCollisionObjectQueryParams(ECC_TO_BITFIELD(ECC_WorldStatic) | ECC_TO_BITFIELD(ECC_WorldDynamic)), FCollisionQueryParams(NAME_AILineOfSight, true, IgnoreActor));
	NumberOfLoSChecksPerformed++;
	if (bHit == false || (HitResult.Actor.IsValid() && HitResult.Actor->IsOwnedBy(this)))
	{
		OutSeenLocation = GetActorLocation();
		OutSightStrength = 1;
		return true;
	}
	OutSightStrength = 0;
	return false;
}


//////////////////////////////networking //////////////////////////////////////////////

//Override for networking
void ADefaultCH::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION(ADefaultCH, RotationY, COND_SimulatedOnly);
	DOREPLIFETIME_CONDITION(ADefaultCH, States, COND_SimulatedOnly);
}



//Replicates player rotation pitch to other players (must be done by functionName_Implementation())
void ADefaultCH::UpdateYRot_Implementation()
{
	if (!GetOwner()) 
	{ 
		return;
	}
	if (HasAuthority())
	{
		RotationY = GetControlRotation().Pitch;	
	}
}

void ADefaultCH::UpdateChStates_Implementation(FChStates NewStates)
{
	if (HasAuthority())
	{
		States = NewStates;
		Event_StatesUpdated();
	}
}

void ADefaultCH::OnRep_SetStates()
{
	Event_StatesUpdated();
}


//////////////////////////end of networking///////////////////////////////////////////