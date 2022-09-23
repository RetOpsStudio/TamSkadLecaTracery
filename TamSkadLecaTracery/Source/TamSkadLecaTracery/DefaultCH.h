// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Perception/AISightTargetInterface.h"
#include "DefaultCH.generated.h"

class UCameraComponent;
class UAnimInstance;
class AGunParentV2;
// enum used to switch between animation states
UENUM(BlueprintType)
enum class E_PlayerStatus : uint8
{
	Idle		UMETA(DisplayName = "Idle"),
	Firing      UMETA(DisplayName = "Firing"),
	Reloading   UMETA(DisplayName = "Reloading"),
	Dead		UMETA(DisplayName = "Dead")
};

// struct used to replicate player animation states
USTRUCT(BlueprintType)
struct FChStates
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool b_IsCrouching = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool b_IsJumping = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	E_PlayerStatus CurrentStatus = E_PlayerStatus::Idle;
};

UCLASS()
class TAMSKADLECATRACERY_API ADefaultCH : public ACharacter, public IAISightTargetInterface
{
	GENERATED_BODY()

public:

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
		const AActor* IgnoreActor = nullptr,
		const bool* bWasVisible = nullptr,
		int32* UserData = nullptr
	) const override;

	///////////networking functions/////////////	

	// Used for replicating RotationY variable
	UFUNCTION(BlueprintCallable, Server, Unreliable, Category = "Networking")
	void UpdateYRot();
	void UpdateYRot_Implementation();

	// Used for replicating struct with animation states
	UFUNCTION(BlueprintCallable, Server, Reliable, Category = "Networking")
	void UpdateChStates(FChStates NewStates);
	void UpdateChStates_Implementation(FChStates NewStates);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Event_StatesUpdated"))
	void Event_StatesUpdated();

	UFUNCTION(BlueprintCallable)
	void OnRep_SetStates(FChStates NewStates);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	TSubclassOf<AGunParentV2> PrimaryWeaponClass;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// for replication
	void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void SetupVariables(UAnimInstance* Ref);


	// used to replicate aim direction on Y axis (up and down)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Category = "Networking")
	float RotationY = 0;

	// struct used to replicate animation states
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_SetStates, Category = "Networking")
	FChStates States;

private:
	//Normal FOV
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming", meta = (AllowPrivateAccess = "true"))
	float Fov = 90;

	// FOV when Aim down sights
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Aiming", meta = (AllowPrivateAccess = "true"))
	float AimFov = 60;


	UPROPERTY(EditDefaultsOnly, Category = "Setup", meta = (AllowPrivateAccess = "true"))
	int HP = 100;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "ABP", meta = (AllowPrivateAccess = "true"))
	E_PlayerStatus CurrentStatus = E_PlayerStatus::Idle;

	UAnimInstance * ABPRef = nullptr;
};
