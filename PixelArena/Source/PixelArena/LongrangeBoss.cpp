// Fill out your copyright notice in the Description page of Project Settings.


#include "LongrangeBoss.h"

void ALongrangeBoss::Teleport()
{
    if (bAtCenter)
        TeleportRandomCorner();
    else
        TeleportCenter();
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
            
        IdleState();
        break;
    case BossAttacking:
        if (HitCount >= 5)
        {
            HitCount = 0;
            CurrentState = BossAbility;
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
