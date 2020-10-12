// Fill out your copyright notice in the Description page of Project Settings.


#include "LongrangeBoss.h"

void ALongrangeBoss::Teleport()
{
    if (bAtCenter)
        TeleportRandomCorner();
    else
        TeleportCenter();
}

void ALongrangeBoss::BasicAttack()
{
    AttackCount = AttackCount + 1;
    UWorld* const World = GetWorld();

    if (World)
    {
        AArenaProjectile* projectile = World->SpawnActor<AArenaProjectile>(BasicProjectile);
        projectile->SetActorLocation(GetActorLocation() + BasicProjectileOffset);
        projectile->FireAtPlayer();
    }
}

void ALongrangeBoss::SpecialAttack()
{
    AttackCount = 5;
    UWorld* const World = GetWorld();

    if (World)
    {
        FVector playerLocation = World->GetFirstPlayerController()->GetPawn()->GetActorLocation();
        FVector direction = playerLocation - GetActorLocation();

        direction = direction.RotateAngleAxis(-45, FVector(0, 1, 0));
        
        for (int i = 0; i < 5; i++)
        {
            AArenaProjectile* projectile = World->SpawnActor<AArenaProjectile>(SpecialProjectile);
            projectile->SetActorLocation(GetActorLocation() + SpecialProjectileOffset);
            projectile->Fire(direction);
            direction = direction.RotateAngleAxis(22.5, FVector(0, 1, 0));
        }
    }
}

void ALongrangeBoss::TeleportCenter()
{
    bAtCenter = true;
    SetActorLocation(CenterSpawn->GetActorLocation());
}

void ALongrangeBoss::TeleportRandomCorner()
{
    bAtCenter = false;
    SetActorLocation(CornerSpawns[FMath::RandRange(0, 3)]->GetActorLocation());
}

void ALongrangeBoss::Tick(float DeltaSeconds)
{
    switch(CurrentState)
    {
    case BossIdle:
        if (HitCount >= 5)
        {
            HitCount = 0;
            CurrentState = BossAbility;
            break;
        }
        if (bPlayerVisible && !bShouldTeleport)
        {
            CurrentState = BossAttacking;
            break;
        }
            
        IdleState();
        break;
    case BossAttacking:
        if (HitCount >= 5)
        {
            HitCount = 0;
            CurrentState = BossAbility;
            break;
        }
        if (!bPlayerVisible)
        {
            CurrentState = BossIdle;
            break;
        }
        if (AttackCount >= 5)
        {
            AttackCount = 0;
            bShouldTeleport = true;
            CurrentState = BossIdle;
            break;
        }
            
        AttackState();
        break;
    case BossAbility:
        if (bTeleported)
        {
            bTeleported = false;
            bTeleporting = false;
            CurrentState = BossIdle;
            break;
        }
        
        AbilityState();
        break;
    default:
        break;
    }
}
