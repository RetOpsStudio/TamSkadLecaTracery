// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveGameParent.generated.h"

/**
 * 
 */
UCLASS()
class TAMSKADLECATRACERY_API USaveGameParent : public USaveGame
{
	GENERATED_BODY()
public:

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Basic)
    FString PlayerName;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Basic)
    FString SaveSlotName;

    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Basic)
    int UserIndex;
};
