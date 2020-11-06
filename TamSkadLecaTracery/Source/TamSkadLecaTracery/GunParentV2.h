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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	float InMagAmmo = 30;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	float CarryOnAmmo = 90;
protected:
	UFUNCTION(BlueprintCallable)
		void Fire(FTransform BulletSpawnTransform);

	UPROPERTY(EditAnywhere, Category = "Ammo")
	float BulletSpeed = 10000;

	UPROPERTY(EditDefaultsOnly, Category = "Ammo")
	TSubclassOf<AActor> BulletClass;

	virtual void Tick(float DeltaTime) override;
};
