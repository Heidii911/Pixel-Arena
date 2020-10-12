// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "ArenaActor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "ArenaProjectile.generated.h"

UCLASS()
class PIXELARENA_API AArenaProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArenaProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Properties
	UPROPERTY(BlueprintReadWrite, Category = Projectile) AArenaActor* Shooter;

	// Events
	UFUNCTION(BlueprintImplementableEvent, Category = Projectile) void Fire(FVector direction);
	
	// Functions
	virtual void Tick(float DeltaTime) override;
	void FireAtPlayer();


};
