// Fill out your copyright notice in the Description page of Project Settings.


#include "BulletParent.h"
#include "Components/SphereComponent.h"

#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
ABulletParent::ABulletParent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Setup();
	ProjectileMovementComponent->bAutoActivate = false;
}

// Called when the game starts or when spawned
void ABulletParent::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABulletParent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABulletParent::FireInDirection(const FVector& ShootDirection, float Speed)
{
	ProjectileMovementComponent->Velocity = ShootDirection * Speed;
	ProjectileMovementComponent->Activate();
}

void ABulletParent::Setup()
{
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
	ProjectileMovementComponent->InitialSpeed = InitialBulletSpeed;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->bShouldBounce = true;
	ProjectileMovementComponent->Bounciness = 0.05f;
}

int ABulletParent::GetDamageToDeal(float damageMultiplier)
{
	if (!ProjectileMovementComponent)
	{
		return 0;
	}
	float baseDmgProc = ProjectileMovementComponent->Velocity.Size() / GetInitialBulletSpeed();
	float dmgBeforeMul = baseDmgProc * baseDamage;
	return static_cast<int>(dmgBeforeMul * damageMultiplier);

}

bool ABulletParent::GetVelocityAfterImpact(int obstacleArmor, const FVector& inVelocity, FVector& outVelocity)
{
	float procentageSlow = FMath::Clamp(static_cast<int>(obstacleArmor - armorPenetration), 0, 100);
	procentageSlow /= 100.f;
	outVelocity = inVelocity - inVelocity * procentageSlow;
	return outVelocity.Size() >= minimalBulletSpeed;
}

bool ABulletParent::HandleRicochet(USceneComponent* bullet, const FVector& hitNormal)
{
	bool bResult = CheckIfRicochet(bullet, hitNormal);
	if (bResult)
	{
		ChangeBulletTrajectory();
	}
	return bResult;
}

bool ABulletParent::CheckIfRicochet(USceneComponent* bullet, const FVector& hitNormal)
{
	if (!bullet || bullet->ComponentVelocity.Size() < minimalBulletSpeed)
	{
		return false;
	}
	FVector bulletDir = bullet->GetForwardVector();
	float cosine = FVector::DotProduct(hitNormal, bulletDir);
	//dot for 90 = 0
	auto notRicoChance = FMath::Abs(cosine * 100); //our chance to not rico
	int random = FMath::RandHelper(100);//returns random int, with max value 100;
	return random > static_cast<int>(notRicoChance); //if cosine was 1 it should it should be false
}

void ABulletParent::ChangeBulletTrajectory()
{
	auto& velo = ProjectileMovementComponent->Velocity;
	velo.X *= FMath::FRandRange(0.5, 1.0);
	velo.Y *= FMath::FRandRange(0.5, 1.0);
	velo.Z *= FMath::FRandRange(0.5, 1.0);
}
