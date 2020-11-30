// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "HitBox.generated.h"

/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class TAMSKADLECATRACERY_API UHitBox : public UStaticMeshComponent
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable)
	float GetDamageMultiplier() const { return DamageMultiplier; }

	UFUNCTION(BlueprintCallable)
	int GetArmor() const { return Armor; }
protected:
	UPROPERTY(EditAnywhere, Category = "Ammo")
	float DamageMultiplier = 1;

	UPROPERTY(EditAnywhere, Category = "Ammo")
	int Armor = 100; //E.g bullet has 12% pen, hitting 100 armor comp, giving full dmg to comp but loosing 88% of his speed 

	
};
