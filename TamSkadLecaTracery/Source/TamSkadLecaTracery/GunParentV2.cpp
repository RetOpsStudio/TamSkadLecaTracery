// Fill out your copyright notice in the Description page of Project Settings.


#include "GunParentV2.h"

AGunParentV2::AGunParentV2()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}
void AGunParentV2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}