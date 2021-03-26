// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GunParent.h"
#include "SaveGameParent.generated.h"

/**
 * 
 */
UCLASS()
class TAMSKADLECATRACERY_API USaveGameParent : public USaveGame
{
	GENERATED_BODY()
public:

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Basic")
    FString PlayerName = FString("DefaultPlayerName");

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Basic")
    FString SaveSlotName = FString("DefaultSlotName");

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Basic")
    int UserIndex;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Loadout")
    TSubclassOf<AGunParentV2> PrimaryWeaponClass;

};
