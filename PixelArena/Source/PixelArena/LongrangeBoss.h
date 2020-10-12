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
	UPROPERTY(EditAnywhere, Category = LONGRANGE_BOSS) AActor* CenterSpawn;
	UPROPERTY(EditAnywhere, Category = LONGRANGE_BOSS) TArray<AActor*> CornerSpawns;
	UPROPERTY(BlueprintReadWrite, Category =  LONGRANGE_BOSS) int HitCount;
	UPROPERTY(BlueprintReadWrite, Category = LONGRANGE_BOSS) bool bTeleporting = false;
	UPROPERTY(BlueprintReadWrite, Category = LONGRANGE_BOSS) bool bTeleported = false;

	// Functions
	UFUNCTION(BlueprintCallable, Category = LONGRANGE_BOSS) void Teleport();

protected:
	// Properties
	bool bAtCenter = true;

	// Functions
	void TeleportCenter();
	void TeleportRandomCorner();
	virtual void Tick(float DeltaSeconds) override;
};
