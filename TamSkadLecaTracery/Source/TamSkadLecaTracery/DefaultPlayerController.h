// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "DefaultPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TAMSKADLECATRACERY_API ADefaultPlayerController : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	FGenericTeamId TeamID;
protected:
	void BeginPlay();
	void Tick(float DeltaTime);
	//from TeamAgentInterface
	FGenericTeamId GetGenericTeamId() const { return TeamID; }
};
