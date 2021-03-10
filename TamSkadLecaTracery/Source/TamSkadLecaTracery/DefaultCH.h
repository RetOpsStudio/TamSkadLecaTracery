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
	bool b_IsCrouching = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool b_IsJumping = false;


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

	// determinates is player can be seen by AI
	virtual bool CanBeSeenFrom(
		const FVector& ObserverLocation,
		FVector& OutSeenLocation,
		int32& NumberOfLoSChecksPerformed,
		float& OutSightStrength,
		const AActor* IgnoreActor = NULL
	) const;

	///////////networking functions/////////////	

	// for replication
	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;

	// Used for replicating RotationY variable
	UFUNCTION(BlueprintCallable, Server, Unreliable, Category = "Networking")
	void UpdateYRot(float NewRotationY);
	void UpdateYRot_Implementation(float NewRotationY);

	// Used for replicating struct with ABP states
	UFUNCTION(BlueprintCallable, Server, Reliable, Category = "Networking")
	void UpdateChStates(FChStates NewStates);
	void UpdateChStates_Implementation(FChStates NewStates);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "UpdateABP_Event"))
	void UpdateABP();

	/////////end of networking functions//////////

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetupVariables(UAnimInstance* Ref);

	// TODO delete
	UFUNCTION(BlueprintCallable, Category = "ABP")
	float CalculateMovementDirection() const; //calculates direction for ABP "Direction"



	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Setup")
	TSubclassOf<AGunParentV2> StartingWeapon;

	//Normal FOV
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming")
	float Fov = 90;

	// FOV when Aim down sights
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming")
	float AimFov = 60;
	
	UAnimInstance * ABPRef = nullptr;

	// used to replicate aim direction on Y axis (up and down)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Networking")
	float RotationY = 0;

	// struct used to replicate animation states
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Networking")
	FChStates States;
private:


	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	int HP = 100;
};
