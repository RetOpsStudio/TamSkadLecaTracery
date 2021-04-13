// Fill out your copyright notice in the Description page of Project Settings.


#include "GameStateParent.h"
#include "Net/UnrealNetwork.h"
#include "PlayerStateParent.h"

/*function to sort player array by given condition*/
TArray<APlayerState*> AGameStateParent::SortByScore(TArray<APlayerState*> ArrToSort)
{
	ArrToSort.Sort(
		[]( APlayerState& L,  APlayerState& R)
		{
			return Cast<APlayerStateParent>(&L)->Kills <Cast<APlayerStateParent>(&R)->Kills;
		}
	);
	return ArrToSort;
}

/** Add PlayerState to the PlayerArray */
void AGameStateParent::AddPlayerState(APlayerState* PlayerState)
{
	Super::AddPlayerState(PlayerState);
	OnNewPlayerStateAddedToArrayDelegate.Broadcast();
}

/*override for adding replicated variables*/
void AGameStateParent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AGameStateParent, GreenTeamScore);
	DOREPLIFETIME(AGameStateParent, RedTeamScore);
}


