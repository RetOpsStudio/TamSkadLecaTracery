// Fill out your copyright notice in the Description page of Project Settings.


#include "AiControllerParent.h"
#include "GenericTeamAgentInterface.h"

void AAiControllerParent::BeginPlay()
{
    Super::BeginPlay();
    SetGenericTeamId(TeamId);
 
}

void AAiControllerParent::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    

}
ETeamAttitude::Type AAiControllerParent::GetTeamAttitudeTowards(const AActor& Other) const
{
    if (const APawn* OtherPawn = Cast<APawn>(&Other)) //true if cast succesfull
    {

        if (const IGenericTeamAgentInterface* TeamAgent = Cast<IGenericTeamAgentInterface>(OtherPawn->GetController()))
        {
            return Super::GetTeamAttitudeTowards(*OtherPawn->GetController());
        }
    }

    return ETeamAttitude::Neutral;
}

