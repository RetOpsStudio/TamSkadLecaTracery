// Fill out your copyright notice in the Description page of Project Settings.


#include "AiDefaultChParent.h"

// Sets default values
AAiDefaultChParent::AAiDefaultChParent()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAiDefaultChParent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAiDefaultChParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAiDefaultChParent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

