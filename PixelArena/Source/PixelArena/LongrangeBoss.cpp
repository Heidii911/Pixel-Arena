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
        projectile->SetActorLocation(GetActorLocation());
        projectile->FireAtPlayer();
    }
    GEngine->AddOnScreenDebugMessage(-1, 0.2f, FColor::Red, TEXT("Boss Basic Attack"));
}

void ALongrangeBoss::SpecialAttack()
{
    AttackCount = 5;
    GEngine->AddOnScreenDebugMessage(-1, 0.2f, FColor::Red, TEXT("Boss Special Attack"));
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
