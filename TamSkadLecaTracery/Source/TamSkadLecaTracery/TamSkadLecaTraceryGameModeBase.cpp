// Copyright Epic Games, Inc. All Rights Reserved.


#include "TamSkadLecaTraceryGameModeBase.h"

/*Add score to green team and fires delegate OnAddTeamScoreDelegate*/
void ATamSkadLecaTraceryGameModeBase::AddGreenTeamScore(int ScoreToAdd)
{
	GreenTeamScore += ScoreToAdd;
	OnAddTeamScoreDelegate.Broadcast(E_TeamID::GreenTeamID);
}

/*Add score to red team and fires delegate OnAddTeamScoreDelegate*/
void ATamSkadLecaTraceryGameModeBase::AddRedTeamScore(int ScoreToAdd)
{
	RedTeamScore += ScoreToAdd;
	OnAddTeamScoreDelegate.Broadcast(E_TeamID::RedTeamID);
}
