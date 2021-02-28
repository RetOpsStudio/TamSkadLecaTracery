// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "ChAiPerception.generated.h"

/**
 * 
 */
UCLASS()
class TAMSKADLECATRACERY_API UChAiPerception : public UAIPerceptionComponent
{
	GENERATED_BODY()
		FGenericTeamId UAIPerceptionComponent::GetTeamIdentifier() const;
	
};
