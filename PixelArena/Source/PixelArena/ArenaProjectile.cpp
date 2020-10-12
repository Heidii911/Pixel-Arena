// Fill out your copyright notice in the Description page of Project Settings.


#include "ArenaProjectile.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
AArenaProjectile::AArenaProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AArenaProjectile::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AArenaProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AArenaProjectile::FireAtPlayer()
{
	FVector playerLocation = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetActorLocation();
	FVector direction = playerLocation - GetActorLocation();
	Fire(direction);
}

