// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "GameStateParent.generated.h"


/**
 * 
 */
UCLASS()
class TAMSKADLECATRACERY_API AGameStateParent : public AGameState
{
	GENERATED_BODY()
public:

	/*sort player array by player score */
	UFUNCTION(BlueprintCallable, Category = "Utility")
	TArray<APlayerState*> SortByScore(TArray<APlayerState* > ArrToSort);

protected:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Category = "Score")
	int GreenTeamScore;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Category = "Score")
	int RedTeamScore;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
	int GreenTeamID = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
	int RedTeamID = 1;

	/*override for adding replicated variables*/
	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;
	
};
