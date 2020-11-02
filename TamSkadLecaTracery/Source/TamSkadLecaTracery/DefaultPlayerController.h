// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "DefaultPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TAMSKADLECATRACERY_API ADefaultPlayerController : public APlayerController
{
	GENERATED_BODY()
protected:
	void BeginPlay();
	void Tick(float DeltaTime);
};
