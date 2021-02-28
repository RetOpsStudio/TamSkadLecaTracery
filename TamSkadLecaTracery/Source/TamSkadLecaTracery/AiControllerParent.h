// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AiControllerParent.generated.h"

/**
 * 
 */
UCLASS()
class TAMSKADLECATRACERY_API AAiControllerParent : public AAIController
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	FGenericTeamId TeamId = FGenericTeamId(2);
protected:
	
	ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;
	void BeginPlay();
	void Tick(float DeltaTime);
};
