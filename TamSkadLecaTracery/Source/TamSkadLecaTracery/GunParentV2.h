// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "GunParentV2.generated.h"

/**
 * 
 */
UCLASS()
class TAMSKADLECATRACERY_API AGunParentV2 : public ASkeletalMeshActor
{
	GENERATED_BODY()
public:
	AGunParentV2();

	UFUNCTION(BlueprintCallable)
	void Fire(FTransform BulletSpawnTransform);


	UFUNCTION(BlueprintCallable)
	FString GetAmmoLeft();


	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	int InMagAmmo = 30;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	int CarryOnAmmo = 90;

	UPROPERTY(EditAnywhere, Category = "Ammo")
	float BulletSpeed = 10000;

	UPROPERTY(EditDefaultsOnly, Category = "Ammo")
	TSubclassOf<AActor> BulletClass;

	virtual void Tick(float DeltaTime) override;
private: 
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	float BulletLifeTime = 0.5;
};
