// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#define LONGRANGE_BOSS "Longrange Boss"

#include "CoreMinimal.h"
#include "ArenaBoss.h"
#include "LongrangeBoss.generated.h"

/**
 * 
 */
UCLASS()
class PIXELARENA_API ALongrangeBoss : public AArenaBoss
{
	GENERATED_BODY()

public:
	// Properties
	UPROPERTY(EditAnywhere, Category = LONGRANGE_BOSS) AActor* CenterSpawn; // Center spawn point for teleporting.
	UPROPERTY(EditAnywhere, Category = LONGRANGE_BOSS) TArray<AActor*> CornerSpawns; // Corner spawn points for teleporting.
	UPROPERTY(EditAnywhere, Category = LONGRANGE_BOSS) float SpecialAttackSpeed; // The delay between the special chain attacks.
	UPROPERTY(BlueprintReadWrite, Category = LONGRANGE_BOSS) int HitCount; // Number of times the boss has been damaged at this position.
	UPROPERTY(BlueprintReadWrite, Category = LONGRANGE_BOSS) int AttackCount = 0; // Number of attack the boss has complete from this position.
	UPROPERTY(BlueprintReadWrite, Category = LONGRANGE_BOSS) float AttackTime;
	UPROPERTY(BlueprintReadWrite, Category = LONGRANGE_BOSS) bool bShouldTeleport = false; // Whether the boss should be teleporting.
	UPROPERTY(BlueprintReadWrite, Category = LONGRANGE_BOSS) bool bTeleporting = false; // Whether the boss is currently teleporting.
	UPROPERTY(BlueprintReadWrite, Category = LONGRANGE_BOSS) bool bTeleported = false; // Whether the boss has finished teleporting.
	UPROPERTY(BlueprintReadWrite, Category = LONGRANGE_BOSS) bool bAtCenter = true; // Whether the boss is at the center of the room.

	// Functions
	UFUNCTION(BlueprintCallable, Category = LONGRANGE_BOSS) void Teleport();
	UFUNCTION(BlueprintCallable, Category = LONGRANGE_BOSS) void BasicAttack();
	UFUNCTION(BlueprintCallable, Category = LONGRANGE_BOSS) void SpecialAttack();

protected:

	// Functions
	void TeleportCenter();
	void TeleportRandomCorner();
	virtual void Tick(float DeltaSeconds) override;
};
