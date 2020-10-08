// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#define TAG "Longrange Boss"

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
	UPROPERTY(EditAnywhere, Category = TAG) AActor* CenterSpawn;
	UPROPERTY(EditAnywhere, Category = TAG) TArray<AActor*> CornerSpawns;
	UPROPERTY(BlueprintReadWrite, Category =  TAG) int HitCount;

	// Functions
	UFUNCTION(BlueprintCallable, Category = TAG) void TeleportCenter();
	UFUNCTION(BlueprintCallable, Category = TAG) void TeleportRandomCorner();
};
