// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include <map>

#include "PaperCharacter.h"
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

		// Functions
		UFUNCTION(BlueprintCallable, Category="Arena Character")
		void Move();
		UFUNCTION(BlueprintImplementableEvent, Category="Arena Character")
		void IdleState();
		UFUNCTION(BlueprintImplementableEvent, Category="Arena Character")
	    void WalkingState();

	protected:
		bool isMoving = false;
		//TEnumAsByte<Direction> moveDirection = None;
		std::map<Direction, FDateTime> moveInputMap;

		void UpdateMovementInput(Direction direction, FDateTime time);
		DECLARE_DELEGATE_TwoParams(UpdateMovementInputDelegate, Direction, FDateTime);

	protected:
		// Called every frame
		virtual void Tick( float DeltaSeconds ) override;
		virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
};