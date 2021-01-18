// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "GunParentV2.generated.h"

class UObject;
class UParticleSystem;
class USceneComponent;
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
	void Fire(FTransform BulletSpawnTransform, UParticleSystem* MuzzleFlash, USceneComponent* AttachTo);

	UFUNCTION(BlueprintCallable)
	void Reload();

	UFUNCTION(BlueprintCallable)
	FString GetAmmoLeft() const;

	UFUNCTION(BlueprintCallable)
	float GetShotsInterval() const { return (60 / ShootsPerMinute); }

	UFUNCTION(BlueprintCallable)
	float GetShotsPerMinute() const { return ShootsPerMinute; }

	UFUNCTION(BlueprintCallable)
	bool IsReadyToFire() const { return InMagAmmo>0; }

	UFUNCTION(BlueprintCallable)
	float GetReloadTime() const { return ReloadTime; }


	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	int MagazineSize= 30;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	int InMagAmmo = MagazineSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	int CarryOnAmmo = 90;

	//UPROPERTY(EditAnywhere, Category = "Ammo")
	//float BulletSpeed = 10000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	float ShootsPerMinute = 400;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	float ReloadTime = 2.05;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ammo")
	TSubclassOf<AActor> BulletClass;


	virtual void Tick(float DeltaTime) override;
private: 
	UPROPERTY(EditAnywhere, Category = "Setup")
	float BulletLifeTime = 1.f;

	void FillMagFromAmmoLeft();
};
