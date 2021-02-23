// Fill out your copyright notice in the Description page of Project Settings.


#include "HitBox.h"

void UHitBox::SetParameters(int ArmorToSet, float DmgMultiToSet)
{
	Armor = ArmorToSet;
	DamageMultiplier = DmgMultiToSet;
}