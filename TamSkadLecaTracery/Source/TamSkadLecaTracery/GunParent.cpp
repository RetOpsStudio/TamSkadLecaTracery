// Fill out your copyright notice in the Description page of Project Settings.


#include "GunParent.h"
#include "BulletParent.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"

AGunParentV2::AGunParentV2()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}

void AGunParentV2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

/*Fires weapon*/ //Controllerref is now get from instigator TODO remove PlayerControllerID & ControllerRef as it is useless in multiplayer
void AGunParentV2::Fire(FTransform BulletSpawnTransform, USceneComponent* AttachTo, APawn* NewInstigator)
{
	if (!ensure(BulletClass))
	{
		return;
	}
	if (InMagAmmo > 0)
	{
		
		if (HasAuthority())
		{
			auto Bullet = GetWorld()->SpawnActor<ABulletParent>(BulletClass, BulletSpawnTransform);   //spawning bullet from template

			if (!Bullet) { return; }

			Bullet->SetInstigator(NewInstigator);
			Bullet->SetLifeSpan(BulletLifeTime);
			Bullet->FireInDirection(BulletSpawnTransform.GetRotation().GetForwardVector(), Bullet->GetInitialBulletSpeed());
			InMagAmmo--;
		}
		else //if local copy
		{
			auto Bullet = GetWorld()->SpawnActor<ABulletParent>(BulletClass, BulletSpawnTransform);   //spawning bullet from template

			if (!Bullet) { return; }

			Bullet->SetLifeSpan(BulletLifeTime);
			Bullet->FireInDirection(BulletSpawnTransform.GetRotation().GetForwardVector(), Bullet->GetInitialBulletSpeed());
			InMagAmmo--;
		}

	}
	
}

/*called when you want to reload weapon*/
void AGunParentV2::Reload()
{
	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(TimerHandle,this, &AGunParentV2::FillMagFromAmmoLeft, ReloadTime, false);
}

/*ending process of reloading weapon, fills weapon magazine, and removing this ammo form CarryOnAmmo*/
void AGunParentV2::FillMagFromAmmoLeft()
{
	if (!ensure(MagazineSize >= 0)) 
	{
		UE_LOG(LogTemp, Warning, TEXT("MagazineSize cannot be lower then 1 you idiot"));
		return;
	}

	if (CarryOnAmmo > 0) 
	{
		int AmmoDifference = InMagAmmo;//saving current ammo in mag value
		InMagAmmo += FMath::Clamp<int>(CarryOnAmmo, 0, MagazineSize - InMagAmmo);
		CarryOnAmmo -= InMagAmmo - AmmoDifference;
	}
	//UE_LOG(LogTemp, Warning, TEXT("Xd"));
}

/*gets ammo left as string*/
FString AGunParentV2::GetAmmoLeft() const
{
	
	return FString::FromInt(InMagAmmo) + FString("/") + FString::FromInt(CarryOnAmmo);
}



// networking
void AGunParentV2::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(AGunParentV2, InMagAmmo);
}