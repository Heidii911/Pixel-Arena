#include "ArenaBoss.h"

AArenaBoss::AArenaBoss()
{
    GetSprite()->OnFinishedPlaying.AddDynamic(this, &AArenaBoss::AnimationFinished);
}

void AArenaBoss::Attack() {}

void AArenaBoss::Ability() {}

void AArenaBoss::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    switch(CurrentState)
    {
        case BossIdle:
            IdleState();
            break;
        case BossAttacking:
            AttackState();
            break;
        case BossAbility:
            AbilityState();
            break;
        default:
            break;
    }
}
