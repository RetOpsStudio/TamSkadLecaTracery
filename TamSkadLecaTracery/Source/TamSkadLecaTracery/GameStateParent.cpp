// Fill out your copyright notice in the Description page of Project Settings.


#include "GameStateParent.h"
#include "PlayerStateParent.h"

TArray<APlayerState*> AGameStateParent::SortByScore(TArray<APlayerState*> ArrToSort)
{
	ArrToSort.Sort(
		[]( APlayerState& L,  APlayerState& R)
		{
			return Cast<APlayerStateParent>(&L)->Kills < Cast<APlayerStateParent>(&R)->Kills;
		}
	);
	return ArrToSort;
}


