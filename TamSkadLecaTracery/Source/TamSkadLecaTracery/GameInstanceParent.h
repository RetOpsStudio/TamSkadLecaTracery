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
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "OnSearchGameComplete"))
	void OnSearchFinished();
protected:

	//online session interface
	IOnlineSessionPtr SessionInterface;

	//session search results
	TSharedPtr<FOnlineSessionSearch> SessionSearch;

	//session marked from SessionSearch
	FOnlineSessionSearchResult SessionToJoin;
	

	virtual void Init() override;

	virtual void OnCreateSessionComplete(FName ServerName, bool Succeeded);

	virtual void OnFindSessionComplete(bool Succeeded);

	virtual void OnJoinSessionComplete(FName Name, EOnJoinSessionCompleteResult::Type Result);

	UFUNCTION(BlueprintCallable)
	void CreateServer();

	UFUNCTION(BlueprintCallable)
	void JoinServer();

	UFUNCTION(BlueprintCallable)
	void JoinSession(const FSessionInfo &Session);


};
