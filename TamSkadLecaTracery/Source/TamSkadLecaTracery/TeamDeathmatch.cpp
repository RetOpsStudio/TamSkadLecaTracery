// Fill out your copyright notice in the Description page of Project Settings.


#include "TeamDeathmatch.h"

E_TeamID ATeamDeathmatch::EndGameWithResult()
{
	E_TeamID WinningTeam = GetGreenTeamScore() > GetRedTeamScore() ? E_TeamID::GreenTeamID : E_TeamID::RedTeamID;
	OnEndGameWithResultDelegate.Broadcast(WinningTeam);
	return WinningTeam;
}