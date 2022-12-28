// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "TamSkadLecaTraceryGameModeBase.h"
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

	/** Add PlayerState to the PlayerArray */
	UFUNCTION(BlueprintCallable, Category = "Utility")
	virtual void AddPlayerState(APlayerState* PlayerState);

	/*delegate fired when new player is added to player array*/
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnNewPlayerStateAddedToArrayDelegate);

	
	UFUNCTION()
	void OnScoreAdd(E_TeamID TeamID);

protected:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Category = "Score")
	int GreenTeamScore = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Category = "Score")
	int RedTeamScore;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
	int GreenTeamID = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
	int RedTeamID = 1;

	UPROPERTY(BlueprintAssignable, Category = "Score")
	FOnNewPlayerStateAddedToArrayDelegate OnNewPlayerStateAddedToArrayDelegate;

	/*override for adding replicated variables*/
	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
