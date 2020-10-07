// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "ArenaActor.generated.h"

/**
 * 
 */
UCLASS()
class PIXELARENA_API AArenaActor : public APaperCharacter
{
	GENERATED_BODY()

	public:
		// Properties
		UPROPERTY(EditAnywhere, Category="Stats")
		int health;
		int attackDamage;
	
		// Functions
		virtual void Damage(int amount);
};
