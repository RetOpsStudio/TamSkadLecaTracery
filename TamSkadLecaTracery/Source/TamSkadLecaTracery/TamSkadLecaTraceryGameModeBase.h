// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TamSkadLecaTraceryGameModeBase.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class E_TeamID : uint8
{
	GreenTeamID		UMETA(DisplayName = "GreenTeamID"),
	RedTeamID       UMETA(DisplayName = "RedTeamID"),
	None	        UMETA(DisplayName = "None")
};
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
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndGameWithResultDelegate, E_TeamID, TeamID);

	/*
	*  @TeamID id of team whos score has changed (casted to int from FGenericTeamID)
	*	delegate fired on end game with result
	*/
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddTeamScoreDelegate, E_TeamID, TeamID);

	/*ends game and returns winning team id*/
	virtual E_TeamID EndGameWithResult() { return E_TeamID::None; };

	UPROPERTY(BlueprintAssignable, Category = "Score")
	FOnEndGameWithResultDelegate OnEndGameWithResultDelegate;

	UPROPERTY(BlueprintAssignable, Category = "Score")
	FOnAddTeamScoreDelegate OnAddTeamScoreDelegate;
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
	int GreenTeamScore;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Score")
	int RedTeamScore;

};
