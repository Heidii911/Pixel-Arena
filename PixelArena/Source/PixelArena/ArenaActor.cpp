// Fill out your copyright notice in the Description page of Project Settings.


#include "ArenaActor.h"

void AArenaActor::Damage(int amount)
{
	if (CanDamage)
	{
		Health -= amount;
	}

	GEngine->AddOnScreenDebugMessage(-1, 0.2f, FColor::Yellow, TEXT("HELLO"));
	OnDamage(amount);
}

/**
* Plays the given flipbook
* @param flipbook The flipbook that should be played.
* @oaram loop Whether or not the flipbook should loop once finished.
*/
void AArenaActor::PlayFlipbook(UPaperFlipbook* flipbook, bool loop)
{
	GetSprite()->SetLooping(loop);
	GetSprite()->Play();
	GetSprite()->SetFlipbook(flipbook);
}
