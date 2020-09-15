// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include <map>

#include "PaperCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PaperFlipbookComponent.h"

#include "ArenaCharacter.generated.h"

UENUM(BlueprintType)
enum CharacterState
{
	Idle UMETA(DisplayName = "Idle"),
	Walking UMETA(DisplayName = "Walking")
};


UENUM(BlueprintType)
enum Direction {
	North UMETA(DisplayName = "North"),
    East UMETA(DisplayName = "East"),
    South UMETA(DisplayName = "South"),
    West UMETA(DisplayName = "West")
};

UCLASS()
class PIXELARENA_API AArenaCharacter : public APaperCharacter
{
	GENERATED_BODY()
	
	public:
		AArenaCharacter();

		// Properties
		UPROPERTY(EditAnywhere, Category="Arena Character")
		float MoveSpeed = 300;
		UPROPERTY(VisibleAnywhere, Category="Arena Character")
		TEnumAsByte<CharacterState> CharacterState = Idle;
		UPROPERTY(VisibleAnywhere, Category="Arena Character")
		TEnumAsByte<Direction> Facing = South;
		UPROPERTY(EditAnywhere, Category="Arena Character|Animations")
		TMap<TEnumAsByte<Direction>, UPaperFlipbook*> IdleAnimations;
		UPROPERTY(EditAnywhere, Category="Arena Character|Animations")
		TMap<TEnumAsByte<Direction>, UPaperFlipbook*> WalkingAnimations;

		// Functions
		UFUNCTION(BlueprintCallable, Category="Arena Character")
		void Move();
		UFUNCTION(BlueprintCallable, Category="Arena Character")
		void ApplyVelocity(float speed, Direction direction);
		UFUNCTION(BlueprintImplementableEvent, Category="Arena Character")
		void IdleState();
		UFUNCTION(BlueprintImplementableEvent, Category="Arena Character")
	    void WalkingState();
		UFUNCTION(BlueprintImplementableEvent, Category="Arena Character")
		void AttackState();
		UFUNCTION(BlueprintImplementableEvent, Category="Arena Character")
		void AbilityState();

	protected:
		bool isMoving = false;
		std::map<Direction, FDateTime> MoveInputMap;
		FVector& Velocity = GetCharacterMovement()->Velocity;

		void UpdateMovementInput(Direction direction, FDateTime time);
		DECLARE_DELEGATE_TwoParams(UpdateMovementInputDelegate, Direction, FDateTime);

	protected:
		// Called every frame
		virtual void Tick( float DeltaSeconds ) override;
		virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
};