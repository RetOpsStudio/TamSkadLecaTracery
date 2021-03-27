// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStateParent.h"
#include "Net/UnrealNetwork.h"

void APlayerStateParent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(APlayerStateParent, Kills);
	DOREPLIFETIME(APlayerStateParent, Deaths);
}