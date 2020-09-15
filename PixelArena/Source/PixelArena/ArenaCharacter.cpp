// Fill out your copyright notice in the Description page of Project Settings.

#include "ArenaCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"

static FDateTime InputReleaseTime = -1; // The time used to tell weather a key has been released

AArenaCharacter::AArenaCharacter()
{
    // Setup Movement Input Map
    moveInputMap[North] = InputReleaseTime;
    moveInputMap[East] = InputReleaseTime;
    moveInputMap[South] = InputReleaseTime;
    moveInputMap[West] = InputReleaseTime;
}

void AArenaCharacter::Move()
{
}

void AArenaCharacter::UpdateMovementInput(Direction direction, FDateTime time)
{
    // Update map
    moveInputMap[direction] = time;

    // Find key that's down, that was pressed the most recent
    std::pair<Direction, FDateTime> recent = std::make_pair(direction, time);
    std::map<Direction, FDateTime>::iterator current;
    for (current = moveInputMap.begin(); current != moveInputMap.end(); ++current)
    {
        if (current->second > recent.second)
            recent = std::make_pair(current->first, current->second);
    }

    // Update movement
    if (recent.second == InputReleaseTime)
        isMoving = false;
    else
    {
        isMoving = true;
        Facing = recent.first;
    }
}

void AArenaCharacter::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    switch (CharacterState)
    {
        case Idle:
            IdleState();
            if (isMoving)
                CharacterState = Walking;
            break;
        case Walking:
            WalkingState();
            if (!isMoving)
                CharacterState = Idle;
            break;
        default:
            break;
    }
}

void AArenaCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    // Bind Movement Inputs
    PlayerInputComponent->BindAction<UpdateMovementInputDelegate>("North", IE_Pressed, this, &AArenaCharacter::UpdateMovementInput, North, FDateTime::Now());
    PlayerInputComponent->BindAction<UpdateMovementInputDelegate>("North", IE_Released, this, &AArenaCharacter::UpdateMovementInput, North, InputReleaseTime);
    PlayerInputComponent->BindAction<UpdateMovementInputDelegate>("East", IE_Pressed, this, &AArenaCharacter::UpdateMovementInput, East, FDateTime::Now());
    PlayerInputComponent->BindAction<UpdateMovementInputDelegate>("East", IE_Released, this, &AArenaCharacter::UpdateMovementInput, East, InputReleaseTime);
    PlayerInputComponent->BindAction<UpdateMovementInputDelegate>("South", IE_Pressed, this, &AArenaCharacter::UpdateMovementInput, South, FDateTime::Now());
    PlayerInputComponent->BindAction<UpdateMovementInputDelegate>("South", IE_Released, this, &AArenaCharacter::UpdateMovementInput, South, InputReleaseTime);
    PlayerInputComponent->BindAction<UpdateMovementInputDelegate>("West", IE_Pressed, this, &AArenaCharacter::UpdateMovementInput, West, FDateTime::Now());
    PlayerInputComponent->BindAction<UpdateMovementInputDelegate>("West", IE_Released, this, &AArenaCharacter::UpdateMovementInput, West, InputReleaseTime);
}
