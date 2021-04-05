// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstanceParent.h"
#include "SaveGameParent.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"

void UGameInstanceParent::Init()
{
	Super::Init();
	if (UGameplayStatics::DoesSaveGameExist(SlotName, 0))
	{
		LoadedGame = Cast<USaveGameParent>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
		UE_LOG(LogTemp, Warning, TEXT("LOADED: %s"), *LoadedGame->PlayerName);
	}
	else
	{
		LoadedGame = Cast<USaveGameParent>(UGameplayStatics::CreateSaveGameObject(USaveGameParent::StaticClass()));
		UE_LOG(LogTemp, Warning, TEXT("CREATED&LOADED: %s"), *LoadedGame->PlayerName);
		UGameplayStatics::SaveGameToSlot(LoadedGame, SlotName, 0);
	}

	if (IOnlineSubsystem* SubSystem = IOnlineSubsystem::Get())
	{
		SessionInterface = SubSystem->GetSessionInterface();
		if (SessionInterface.IsValid())
		{
			//Bind SessionInterface Delegates Here
			SessionInterface->OnCreateSessionCompleteDelegates.AddUObject(this, &UGameInstanceParent::OnCreateSessionComplete);
			SessionInterface->OnFindSessionsCompleteDelegates.AddUObject(this, &UGameInstanceParent::OnFindSessionComplete);
			SessionInterface->OnJoinSessionCompleteDelegates.AddUObject(this, &UGameInstanceParent::OnJoinSessionComplete);
			SessionInterface->OnDestroySessionCompleteDelegates.AddUObject(this, &UGameInstanceParent::OnDestroySessionComplete);
			
		}
	}
}

/*Starting CreateServer process (can be done in BP)*/
void UGameInstanceParent::CreateServer(FString ServerName, FString MapName)
{

	//Create and fill Session Settings values
	FOnlineSessionSettings SessionSettings;
	SessionSettings.bAllowJoinInProgress = true;
	SessionSettings.bIsDedicated = false;
	SessionSettings.bIsLANMatch = true;
	SessionSettings.bShouldAdvertise = true;
	SessionSettings.bUsesPresence = true;
	SessionSettings.NumPublicConnections = 10;

	SessionSettings.Set(SETTING_MAPNAME, MapName, EOnlineDataAdvertisementType::ViaOnlineService);
	SessionSettings.Set(FName("SERVER_NAME"), ServerName, EOnlineDataAdvertisementType::ViaOnlineService);

	//takes player ID, session name and session settings, Fires OnCreateSessionCompleteDelegates delegate when process is finished
	SessionInterface->CreateSession(0, GameSessionName, SessionSettings);
}

/*Function bound to delegate which is fired on CreateSession completion*/
void UGameInstanceParent::OnCreateSessionComplete(FName ServerName, bool Succeeded)
{
	//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Session Creation Completed! Succeeded: %d")), Succeeded);
	if (Succeeded)
	{
		FString MapName = SessionInterface->GetSessionSettings(GameSessionName)->Settings.Find(SETTING_MAPNAME)->Data.ToString();
		//if Create Session has succeeded, open new map with option listen
		UGameplayStatics::OpenLevel(GetWorld(), FName(MapName), true, "listen");

		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Red, FString::Printf(TEXT("Session Creation Completed! Succeeded: %s"), *MapName));
	}
}

/*Starting Joining game process (can be done in BP)*/
void UGameInstanceParent::SearchServers()
{
	//Making SessionSearch variable to store search filters and search result
	SessionSearch = MakeShareable(new FOnlineSessionSearch());
	if (SessionSearch.IsValid())
	{
		SessionSearch->bIsLanQuery = true;
		SessionSearch->MaxSearchResults = 10000;
		SessionSearch->QuerySettings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);

		/*Find session gets player ID and SessionSearch reference.
		Filling SessionSearch reference with Searching results.
		Fires OnFindSessionsCompleteDelegates on complete */
		SessionInterface->FindSessions(0, SessionSearch.ToSharedRef());
	}
}
/*Function bound to delegate which is fired on FindSession completion*/
void UGameInstanceParent::OnFindSessionComplete(bool Succeeded)
{
	//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Session Finding Completed! Succeeded: %d"), Succeeded));
	if (Succeeded)
	{
		
		SearchResult.Empty();//clear array before refilling
		if (SessionSearch.IsValid())
		{
			//debug code
			/*GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Session Finding Completed! num: %d"), SessionSearch->SearchResults.Num()));*/
			for (auto& Session : SessionSearch->SearchResults)
			{
				//debug code
				/*GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green,
					FString::Printf(TEXT("Session Finding Completed! Succeeded: %s  %s"),
						*(Session.Session.SessionSettings.Settings.Find(SETTING_MAPNAME)->ToString()),
						*(Session.Session.SessionSettings.Settings.Find(FName("SERVER_NAME"))->ToString())));*/

			/*fill array of structs with info for BP use*/
				SearchResult.Add(FSessionInfo({Session,
					Session.PingInMs,
					Session.Session.SessionSettings.NumPublicConnections,
					Session.Session.NumOpenPublicConnections,
					Session.Session.SessionSettings.Settings.Find(SETTING_MAPNAME)->Data.ToString(),
					Session.Session.SessionSettings.Settings.Find(FName("SERVER_NAME"))->Data.ToString()})
					);
			}
		}
		/*Event fired when games was successfully found. Used in blueprint*/
		OnSearchSessionsFinishedEvent();
	}
}

/*Join Session by passing this session Id in current SessionSearch*/
void UGameInstanceParent::JoinSession(const FSessionInfo &Session)
{
	
	SessionInterface->JoinSession(0, GameSessionName, Session.Session);

}
/*delegate fired on JoinSession complete*/
void UGameInstanceParent::OnJoinSessionComplete(FName Name, EOnJoinSessionCompleteResult::Type Result)
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Joing Session %s Complete: %d"), *Name.ToString(), Result));
	if (Result == EOnJoinSessionCompleteResult::Success)
	{
		FString URL;
		SessionInterface->GetResolvedConnectString(GameSessionName, URL);
		//debug code
		/*GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Joing Session %s Complete: %d"), *URL, Result));*/
		GetWorld()->GetFirstPlayerController()->ClientTravel(URL, ETravelType::TRAVEL_Absolute);
	}
}


void UGameInstanceParent::DestroySession()
{
	SessionInterface->DestroySession(GameSessionName);
}

void UGameInstanceParent::OnDestroySessionComplete(FName Name, bool Succeeded)
{
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString::Printf(TEXT("Destroing Session %s Complete: %d"), *Name.ToString(), Succeeded));
	UGameplayStatics::OpenLevel(GetWorld(), "MP.MainMenu", true);
	OnDestroySessionCompleteEvent();
}