// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#define TAG "Arena Boss"

#include "CoreMinimal.h"
#include "ArenaActor.h"
#include "PaperFlipbookComponent.h"
#include "Components/BoxComponent.h"
#include "ArenaBoss.generated.h"


UENUM(BlueprintType)
enum BossState {
	BossIdle UMETA(DisplayName = "Boss Idle"),
	BossAttacking UMETA(DisplayName = "Boss Attacking"),
	BossAbility UMETA(DisplayName = "Boss Ability")
};

UCLASS()
class PIXELARENA_API AArenaBoss : public AArenaActor
{
	GENERATED_BODY()
public:
	// Constructor
	AArenaBoss();

	// Properties
	UPROPERTY(EditAnywhere, Category = TAG) float AttackSpeed = 100; // Attack speed in milliseconds
	UPROPERTY(EditAnywhere, Category = TAG) UBoxComponent* VisionBox; // Size of the bosses vision box
	UPROPERTY(BlueprintReadWrite, Category = TAG) int AttackCount;
	UPROPERTY(BlueprintReadWrite, Category = TAG) bool bPlayerVisible = false;

	// Events
	UFUNCTION(BlueprintImplementableEvent, Category = TAG) void IdleState();
	UFUNCTION(BlueprintImplementableEvent, Category = TAG) void AttackState();
	UFUNCTION(BlueprintImplementableEvent, Category = TAG) void AbilityState();

	// Functions
	UFUNCTION(BlueprintCallable, Category = TAG) void Attack();
	UFUNCTION(BlueprintCallable, Category =  TAG) void Ability();

protected:
	// Functions
	virtual void Tick(float DeltaSeconds) override;
};
