// Fill out your copyright notice in the Description page of Project Settings.

#include "ArenaCharacter.h"

#include "GameFramework/CharacterMovementComponent.h"

static FDateTime InputReleaseTime = -1; // The time used to tell weather a key has been released

AArenaCharacter::AArenaCharacter()
{
    // Setup Movement Input Map
    MoveInputMap[North] = InputReleaseTime;
    MoveInputMap[East] = InputReleaseTime;
    MoveInputMap[South] = InputReleaseTime;
    MoveInputMap[West] = InputReleaseTime;
}

void AArenaCharacter::Move()
{
    switch (Facing)
    {
        case North:
            Velocity = FVector(0, 0, MoveSpeed);
            break;
        case East:
            Velocity = FVector(MoveSpeed, 0, 0);
            break;
        case South:
            Velocity = FVector(0, 0, -MoveSpeed);
            break;
        case West:
            Velocity = FVector(-MoveSpeed, 0, 0);
        default:
            break;
    }
}

void AArenaCharacter::ApplyVelocity(float speed, Direction direction)
{
}

void AArenaCharacter::PlayFlipbook(UPaperFlipbook* flipbook, bool loop)
{
    GetSprite()->SetLooping(loop);
    GetSprite()->SetFlipbook(flipbook);
}

void AArenaCharacter::UpdateMovementInput(Direction direction, FDateTime time)
{
    // Update map
    MoveInputMap[direction] = time;

    // Find key that's down, that was pressed the most recent
    std::pair<Direction, FDateTime> recent = std::make_pair(direction, time);
    std::map<Direction, FDateTime>::iterator current;
    for (current = MoveInputMap.begin(); current != MoveInputMap.end(); ++current)
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
            GetSprite()->SetFlipbook(IdleAnimations[Facing]);
            if (isMoving)
                CharacterState = Walking;
            break;
        case Walking:
            WalkingState();
            GetSprite()->SetFlipbook(WalkingAnimations[Facing]);
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
