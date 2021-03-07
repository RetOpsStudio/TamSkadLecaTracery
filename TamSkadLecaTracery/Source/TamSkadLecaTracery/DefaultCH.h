// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Perception/AISightTargetInterface.h"
#include "DefaultCH.generated.h"

class UCameraComponent;
class UAnimInstance;
class AGunParentV2;

USTRUCT(BlueprintType)
struct FChStates
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotationY = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool b_IsCrouching = false;


};

UCLASS()
class TAMSKADLECATRACERY_API ADefaultCH : public ACharacter, public IAISightTargetInterface
{
	GENERATED_BODY()

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Sets default values for this character's properties
	ADefaultCH();
	
	UFUNCTION(BlueprintCallable, Category = "Setup")
	int GetHp() { return HP; }

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetHp(int NewHp) { HP = NewHp; }// TODO if newHp<0 Death Delegate

	virtual bool CanBeSeenFrom(
		const FVector& ObserverLocation,
		FVector& OutSeenLocation,
		int32& NumberOfLoSChecksPerformed,
		float& OutSightStrength,
		const AActor* IgnoreActor = NULL
	) const;
		
	// for replication

	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Server, Reliable, Category = "Networking")
	void UpdateYRot();
	void UpdateYRot_Implementation();

	UFUNCTION(BlueprintCallable, Server, Reliable, Category = "Networking")
	void UpdateChStates();
	void UpdateChStates_Implementation();

	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetupVariables(UAnimInstance* Ref);
	
	UFUNCTION(BlueprintCallable, Category = "ABP")
	float CalculateMovementDirection() const; //calculates direction for ABP "Direction"



	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Setup")
	TSubclassOf<AGunParentV2> StartingWeapon;
	/*UPROPERTY(BlueprintReadWrite)
	AActor* Weapon = nullptr;*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming")
	float Fov = 90;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming")
	float AimFov = 60;
	
	UAnimInstance * ABPRef = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = UpdateYRot, Category = "Networking")
	float RotationY = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = UpdateChStates, Category = "Networking")
	FChStates States;
private:


	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	int HP = 100;
};
