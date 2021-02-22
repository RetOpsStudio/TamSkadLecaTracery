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
	//UE_LOG(LogTemp, Warning, TEXT("%s"), *GetRootComponent()->GetComponentVelocity().ToString());

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