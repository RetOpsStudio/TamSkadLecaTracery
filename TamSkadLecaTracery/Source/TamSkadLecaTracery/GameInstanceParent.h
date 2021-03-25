// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameInstanceParent.generated.h"

/**
 * 
 */
//forward declaration
class USaveGameParent;


UCLASS()
class TAMSKADLECATRACERY_API UGameInstanceParent : public UGameInstance
{
	GENERATED_BODY()
public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SaveGame")
	USaveGameParent* LoadedGame;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SaveGame")
	USaveGameParent* SaveGameInstance;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SaveGame")
	FString SlotName = FString("DefaultSlotName");

protected:
	virtual void Init() override;
};
