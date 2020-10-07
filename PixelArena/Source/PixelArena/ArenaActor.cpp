// Fill out your copyright notice in the Description page of Project Settings.


#include "ArenaActor.h"

void AArenaActor::Damage(int amount)
{
	health -= amount;
	OnDamage(amount);
}
