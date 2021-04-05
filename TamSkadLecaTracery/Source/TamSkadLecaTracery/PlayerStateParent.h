// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "PlayerStateParent.generated.h"

/**
 * 
 */
UCLASS()
class TAMSKADLECATRACERY_API APlayerStateParent : public APlayerState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category="Statistics")
	int Kills = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Statistics")
	int Deaths = 0;

protected:
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const;

	UFUNCTION(BlueprintCallable)
	virtual void SetPlayerName(const FString& PlayerName) override;
};
