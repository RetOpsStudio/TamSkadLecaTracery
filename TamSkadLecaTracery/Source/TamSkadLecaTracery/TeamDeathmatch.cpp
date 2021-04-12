// Fill out your copyright notice in the Description page of Project Settings.


#include "TeamDeathmatch.h"

int ATeamDeathmatch::EndGameWithResult()
{
	int WinningTeam = GetGreenTeamScore() > GetRedTeamScore() ? GreenTeamID : RedTeamID;
	OnEndGameWithResultDelegate.Broadcast(WinningTeam);
	return WinningTeam;
}