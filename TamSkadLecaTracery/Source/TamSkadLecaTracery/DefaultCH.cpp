// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultCH.h"
#include "UE4ManACPP.h"
#include "Camera/CameraComponent.h"
#include "Engine/World.h"

// Sets default values
ADefaultCH::ADefaultCH()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	
	
}

// Called when the game starts or when spawned
void ADefaultCH::BeginPlay()
{
	Super::BeginPlay();
	Weapon = GetWorld()->SpawnActor(StartingWeapon); //spawns Weapon that can be attached to PrimaryWeapon slot in CH
}

void ADefaultCH::SetupVariables(UAnimInstance* Ref)
{
	ABPRef = Ref;
}

float ADefaultCH::CalculateMovementDirection() const
{
	auto Rotation = GetControlRotation();
	auto Velocity = GetVelocity();
	
	
	return ABPRef->CalculateDirection(GetVelocity(), FRotator(0,Rotation.Yaw,0));
}


void ADefaultCH::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//if (!Weapon)
	//{
	//	
	//	UE_LOG(LogTemp, Warning, TEXT("nimo"));
	//		//UE_LOG(LogTemp, Warning, TEXT("Text, %d %f %s"), intVar, floatVar, *fstringVar);
	//}
	//if (Weapon)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("jest"));
	//}
	//
}

// Called to bind functionality to input
void ADefaultCH::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

