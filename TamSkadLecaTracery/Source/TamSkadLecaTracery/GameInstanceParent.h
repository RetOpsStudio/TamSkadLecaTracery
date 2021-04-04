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


UCLASS()
class TAMSKADLECATRACERY_API UGameInstanceParent : public UGameInstance
{
	GENERATED_BODY()
public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SaveGame")
	USaveGameParent* LoadedGame;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SaveGame")
	USaveGameParent* SaveGameInstance;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SaveGame")
	FString SlotName = FString("DefaultSlotName");

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
	void JoinSession(int SessionIndex);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "OnHit"))
	void OnSearchFinished();

};
