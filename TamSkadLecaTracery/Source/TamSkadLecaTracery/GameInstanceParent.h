// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "UObject/UObjectGlobals.h"
#include "Templates/SharedPointer.h"
#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Kismet/GameplayStatics.h"
#include "GameInstanceParent.generated.h"

/**
 * 
 */
//forward declaration
class USaveGameParent;

USTRUCT(BlueprintType)
struct FSessionInfo
{
	GENERATED_BODY()
public:
	FOnlineSessionSearchResult Session;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Ping;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxSlots;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int OpenSlots;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ServerName;
	
};


UCLASS()
class TAMSKADLECATRACERY_API UGameInstanceParent : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Network")
	TArray<FSessionInfo> SearchResult;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SaveGame")
	USaveGameParent* LoadedGame;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SaveGame")
	USaveGameParent* SaveGameInstance;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SaveGame")
	FString SlotName = FString("DefaultSlotName");

	/*event fired while JoinServer finish search*/
	UFUNCTION(BlueprintImplementableEvent, Category = "Sessions", meta = (DisplayName = "OnSearchSessionsComplete"))
	void OnSearchSessionsFinishedEvent();

	UFUNCTION(BlueprintImplementableEvent, Category ="Sessions", meta = (DisplayName = "OnDestroySessionComplete"))
	void OnDestroySessionCompleteEvent();
protected:

	//online session interface
	IOnlineSessionPtr SessionInterface;

	//session search results
	TSharedPtr<FOnlineSessionSearch> SessionSearch;

	//session marked from SessionSearch
	FOnlineSessionSearchResult SessionToJoin;
	

	virtual void Init() override;

	//function bound to delegate
	virtual void OnCreateSessionComplete(FName ServerName, bool Succeeded);

	//function bound to delegate
	virtual void OnFindSessionComplete(bool Succeeded);

	//function bound to delegate
	virtual void OnJoinSessionComplete(FName Name, EOnJoinSessionCompleteResult::Type Result);

	//function bound to delegate
	virtual void OnDestroySessionComplete(FName Name, bool Succeeded);

	UFUNCTION(BlueprintCallable)
	void CreateServer(FString ServerName, FString MapName, int SlotNumber = 10, bool IsLan = true);

	UFUNCTION(BlueprintCallable)
	void SearchServers(bool IsLan = true);

	UFUNCTION(BlueprintCallable)
	void JoinSession(const FSessionInfo &Session);

	UFUNCTION(BlueprintCallable)
	void DestroySession();


};
