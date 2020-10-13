// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#define Arena_Actor ""

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "PaperFlipbookComponent.h"

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
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Arena_Actor) int MaxHealth;
		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Arena_Actor) int Health;
		UPROPERTY(EditAnywhere, Category = Arena_Actor) int AttackDamage;
		UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Arena_Actor) bool CanDamage = true;
	
		// Functions
		UFUNCTION(BlueprintCallable, Category = Arena_Actor) virtual void Damage(int amount);
		UFUNCTION(BlueprintCallable, Category = Arena_Actor) void PlayFlipbook(UPaperFlipbook* flipbook, bool loop);

		// Events
		UFUNCTION(BlueprintImplementableEvent, Category = Arena_Actor) void OnDamage(int amount);
};
