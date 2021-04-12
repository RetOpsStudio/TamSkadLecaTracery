// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TamSkadLecaTraceryGameModeBase.h"
#include "TeamDeathmatch.generated.h"

/**
 * 
 */
UCLASS()
class TAMSKADLECATRACERY_API ATeamDeathmatch : public ATamSkadLecaTraceryGameModeBase
{
	GENERATED_BODY()
public:


	UFUNCTION(BlueprintCallable)
	virtual int EndGameWithResult() override;


};
