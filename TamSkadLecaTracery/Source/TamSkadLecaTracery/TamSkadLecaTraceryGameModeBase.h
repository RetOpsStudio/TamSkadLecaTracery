// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TamSkadLecaTraceryGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TAMSKADLECATRACERY_API ATamSkadLecaTraceryGameModeBase : public AGameMode
{
	GENERATED_BODY()
public:
	/*return green team score*/
	UFUNCTION(BlueprintCallable, Category="Score")
	virtual int GetGreenTeamScore() const { return GreenTeamScore; };

	/*return red team score*/
	UFUNCTION(BlueprintCallable, Category = "Score")
	virtual int GetRedTeamScore() const { return RedTeamScore; }

	/*Add score to green team and fires delegate OnAddTeamScoreDelegate*/
	UFUNCTION(BlueprintCallable, Category = "Score")
	virtual void AddGreenTeamScore(int ScoreToAdd);

	/*Add score to red team and fires delegate OnAddTeamScoreDelegate*/
	UFUNCTION(BlueprintCallable, Category = "Score")
	virtual void AddRedTeamScore(int ScoreToAdd);

	/*
	*  @TeamID id of team who have won (casted to int from FGenericTeamID)
	*	delegate fired on end game with result
	*/
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndGameWithResultDelegate, int, TeamID);

	/*
	*  @TeamID id of team whos score has changed (casted to int from FGenericTeamID)
	*	delegate fired on end game with result
	*/
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddTeamScoreDelegate, int, TeamID);

	/*ends game and returns winning team id*/
	virtual int EndGameWithResult() { return 0; };

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
	int GreenTeamScore;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
	int RedTeamScore;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
	int GreenTeamID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
	int RedTeamID;

	UPROPERTY(BlueprintAssignable, Category = "Score")
	FOnEndGameWithResultDelegate OnEndGameWithResultDelegate;

	UPROPERTY(BlueprintAssignable, Category = "Score")
	FOnAddTeamScoreDelegate OnAddTeamScoreDelegate;
};
