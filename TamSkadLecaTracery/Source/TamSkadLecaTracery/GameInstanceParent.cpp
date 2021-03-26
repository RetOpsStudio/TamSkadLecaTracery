// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstanceParent.h"
#include "SaveGameParent.h"
#include "Kismet/GameplayStatics.h"

void UGameInstanceParent::Init()
{
	Super::Init();
	if (UGameplayStatics::DoesSaveGameExist(SlotName, 0))
	{
		LoadedGame = Cast<USaveGameParent>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
		UE_LOG(LogTemp, Warning, TEXT("LOADED: %s"), *LoadedGame->PlayerName);
	}
	else
	{
		LoadedGame = Cast<USaveGameParent>(UGameplayStatics::CreateSaveGameObject(USaveGameParent::StaticClass()));
		UE_LOG(LogTemp, Warning, TEXT("CREATED&LOADED: %s"), *LoadedGame->PlayerName);
		UGameplayStatics::SaveGameToSlot(LoadedGame, SlotName, 0);
	}
}

