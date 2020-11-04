// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"

#include "BulletParent.generated.h"

class UProjectileMovementComponent;

UCLASS()
class TAMSKADLECATRACERY_API ABulletParent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABulletParent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, Category = Movement)
	UProjectileMovementComponent* ProjectileMovementComponent = nullptr;

	UPROPERTY(VisibleDefaultsOnly, Category = Projectile)
	USphereComponent* CollisionComponent = nullptr;;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
	void FireInDirection(const FVector& ShootDirection, float BulletSpeed = 1000);
	//setup movement component
	void Setup();

	UPROPERTY(EditAnywhere, Category = "Setup")
	float InitialBulletSpeed = 1000;

};
