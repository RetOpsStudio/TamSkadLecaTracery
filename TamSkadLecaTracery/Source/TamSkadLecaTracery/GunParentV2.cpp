// Fill out your copyright notice in the Description page of Project Settings.


#include "GunParentV2.h"
#include "BulletParent.h"

AGunParentV2::AGunParentV2()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



}
void AGunParentV2::Fire(FTransform BulletSpawnTransform)
{
	if (!ensure(BulletClass))
	{
		return;
	}
	if (InMagAmmo > 0)
	{
		auto Bullet = GetWorld()->SpawnActor<ABulletParent>(BulletClass,BulletSpawnTransform);
		Bullet->SetLifeSpan(BulletLifeTime);
		Bullet->FireInDirection(BulletSpawnTransform.GetRotation().GetForwardVector(), BulletSpeed);
		InMagAmmo--;
	}
	
}
inline FString AGunParentV2::GetAmmoLeft()
{
	return FString::FromInt(InMagAmmo) + FString("/") + FString::FromInt(CarryOnAmmo);
}

void AGunParentV2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}