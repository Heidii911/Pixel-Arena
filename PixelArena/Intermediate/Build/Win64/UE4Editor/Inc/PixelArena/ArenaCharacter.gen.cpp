// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PixelArena/ArenaCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaCharacter() {}
// Cross Module References
	PIXELARENA_API UEnum* Z_Construct_UEnum_PixelArena_Direction();
	UPackage* Z_Construct_UPackage__Script_PixelArena();
	PIXELARENA_API UEnum* Z_Construct_UEnum_PixelArena_CharacterState();
	PIXELARENA_API UClass* Z_Construct_UClass_AArenaCharacter_NoRegister();
	PIXELARENA_API UClass* Z_Construct_UClass_AArenaCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* Direction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PixelArena_Direction, Z_Construct_UPackage__Script_PixelArena(), TEXT("Direction"));
		}
		return Singleton;
	}
	template<> PIXELARENA_API UEnum* StaticEnum<Direction>()
	{
		return Direction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Direction(Direction_StaticEnum, TEXT("/Script/PixelArena"), TEXT("Direction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PixelArena_Direction_Hash() { return 1004201782U; }
	UEnum* Z_Construct_UEnum_PixelArena_Direction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PixelArena();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Direction"), 0, Get_Z_Construct_UEnum_PixelArena_Direction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "North", (int64)North },
				{ "East", (int64)East },
				{ "South", (int64)South },
				{ "West", (int64)West },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "East.DisplayName", "East" },
				{ "East.Name", "East" },
				{ "ModuleRelativePath", "ArenaCharacter.h" },
				{ "North.DisplayName", "North" },
				{ "North.Name", "North" },
				{ "South.DisplayName", "South" },
				{ "South.Name", "South" },
				{ "West.DisplayName", "West" },
				{ "West.Name", "West" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PixelArena,
				nullptr,
				"Direction",
				"Direction",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* CharacterState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PixelArena_CharacterState, Z_Construct_UPackage__Script_PixelArena(), TEXT("CharacterState"));
		}
		return Singleton;
	}
	template<> PIXELARENA_API UEnum* StaticEnum<CharacterState>()
	{
		return CharacterState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_CharacterState(CharacterState_StaticEnum, TEXT("/Script/PixelArena"), TEXT("CharacterState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PixelArena_CharacterState_Hash() { return 620739714U; }
	UEnum* Z_Construct_UEnum_PixelArena_CharacterState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PixelArena();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("CharacterState"), 0, Get_Z_Construct_UEnum_PixelArena_CharacterState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Idle", (int64)Idle },
				{ "Walking", (int64)Walking },
				{ "Attacking", (int64)Attacking },
				{ "Ability", (int64)Ability },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ability.DisplayName", "Ability" },
				{ "Ability.Name", "Ability" },
				{ "Attacking.DisplayName", "Attacking" },
				{ "Attacking.Name", "Attacking" },
				{ "BlueprintType", "true" },
				{ "Idle.DisplayName", "Idle" },
				{ "Idle.Name", "Idle" },
				{ "ModuleRelativePath", "ArenaCharacter.h" },
				{ "Walking.DisplayName", "Walking" },
				{ "Walking.Name", "Walking" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PixelArena,
				nullptr,
				"CharacterState",
				"CharacterState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AArenaCharacter::execFinishAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArenaCharacter::execPlayFlipbook)
	{
		P_GET_OBJECT(UPaperFlipbook,Z_Param_flipbook);
		P_GET_UBOOL(Z_Param_loop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFlipbook(Z_Param_flipbook,Z_Param_loop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArenaCharacter::execSetVelocity)
	{
		P_GET_STRUCT(FVector,Z_Param_velocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVelocity(Z_Param_velocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArenaCharacter::execApplyVelocity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_speed);
		P_GET_PROPERTY(FByteProperty,Z_Param_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyVelocity(Z_Param_speed,Direction(Z_Param_direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AArenaCharacter::execMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move();
		P_NATIVE_END;
	}
	static FName NAME_AArenaCharacter_AbilityState = FName(TEXT("AbilityState"));
	void AArenaCharacter::AbilityState()
	{
		ProcessEvent(FindFunctionChecked(NAME_AArenaCharacter_AbilityState),NULL);
	}
	static FName NAME_AArenaCharacter_AnimationFinished = FName(TEXT("AnimationFinished"));
	void AArenaCharacter::AnimationFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_AArenaCharacter_AnimationFinished),NULL);
	}
	static FName NAME_AArenaCharacter_AttackState = FName(TEXT("AttackState"));
	void AArenaCharacter::AttackState(float AttackTime, bool AttackDown)
	{
		ArenaCharacter_eventAttackState_Parms Parms;
		Parms.AttackTime=AttackTime;
		Parms.AttackDown=AttackDown ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AArenaCharacter_AttackState),&Parms);
	}
	static FName NAME_AArenaCharacter_IdleState = FName(TEXT("IdleState"));
	void AArenaCharacter::IdleState()
	{
		ProcessEvent(FindFunctionChecked(NAME_AArenaCharacter_IdleState),NULL);
	}
	static FName NAME_AArenaCharacter_WalkingState = FName(TEXT("WalkingState"));
	void AArenaCharacter::WalkingState()
	{
		ProcessEvent(FindFunctionChecked(NAME_AArenaCharacter_WalkingState),NULL);
	}
	void AArenaCharacter::StaticRegisterNativesAArenaCharacter()
	{
		UClass* Class = AArenaCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyVelocity", &AArenaCharacter::execApplyVelocity },
			{ "FinishAttack", &AArenaCharacter::execFinishAttack },
			{ "Move", &AArenaCharacter::execMove },
			{ "PlayFlipbook", &AArenaCharacter::execPlayFlipbook },
			{ "SetVelocity", &AArenaCharacter::execSetVelocity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AArenaCharacter_AbilityState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArenaCharacter_AbilityState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arena Character" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaCharacter_AbilityState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaCharacter, nullptr, "AbilityState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArenaCharacter_AbilityState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaCharacter_AbilityState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArenaCharacter_AbilityState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArenaCharacter_AbilityState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArenaCharacter_AnimationFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArenaCharacter_AnimationFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arena Character" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaCharacter_AnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaCharacter, nullptr, "AnimationFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArenaCharacter_AnimationFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaCharacter_AnimationFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArenaCharacter_AnimationFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArenaCharacter_AnimationFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArenaCharacter_ApplyVelocity_Statics
	{
		struct ArenaCharacter_eventApplyVelocity_Parms
		{
			float speed;
			TEnumAsByte<Direction> direction;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AArenaCharacter_ApplyVelocity_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArenaCharacter_eventApplyVelocity_Parms, direction), Z_Construct_UEnum_PixelArena_Direction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AArenaCharacter_ApplyVelocity_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArenaCharacter_eventApplyVelocity_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArenaCharacter_ApplyVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaCharacter_ApplyVelocity_Statics::NewProp_direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaCharacter_ApplyVelocity_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArenaCharacter_ApplyVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arena Character" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaCharacter_ApplyVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaCharacter, nullptr, "ApplyVelocity", nullptr, nullptr, sizeof(ArenaCharacter_eventApplyVelocity_Parms), Z_Construct_UFunction_AArenaCharacter_ApplyVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaCharacter_ApplyVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArenaCharacter_ApplyVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaCharacter_ApplyVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArenaCharacter_ApplyVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArenaCharacter_ApplyVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArenaCharacter_AttackState_Statics
	{
		static void NewProp_AttackDown_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttackDown;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AArenaCharacter_AttackState_Statics::NewProp_AttackDown_SetBit(void* Obj)
	{
		((ArenaCharacter_eventAttackState_Parms*)Obj)->AttackDown = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AArenaCharacter_AttackState_Statics::NewProp_AttackDown = { "AttackDown", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArenaCharacter_eventAttackState_Parms), &Z_Construct_UFunction_AArenaCharacter_AttackState_Statics::NewProp_AttackDown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AArenaCharacter_AttackState_Statics::NewProp_AttackTime = { "AttackTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArenaCharacter_eventAttackState_Parms, AttackTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArenaCharacter_AttackState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaCharacter_AttackState_Statics::NewProp_AttackDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaCharacter_AttackState_Statics::NewProp_AttackTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArenaCharacter_AttackState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arena Character" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaCharacter_AttackState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaCharacter, nullptr, "AttackState", nullptr, nullptr, sizeof(ArenaCharacter_eventAttackState_Parms), Z_Construct_UFunction_AArenaCharacter_AttackState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaCharacter_AttackState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArenaCharacter_AttackState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaCharacter_AttackState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArenaCharacter_AttackState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArenaCharacter_AttackState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArenaCharacter_FinishAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArenaCharacter_FinishAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arena Character" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaCharacter_FinishAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaCharacter, nullptr, "FinishAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArenaCharacter_FinishAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaCharacter_FinishAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArenaCharacter_FinishAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArenaCharacter_FinishAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArenaCharacter_IdleState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArenaCharacter_IdleState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arena Character" },
		{ "Comment", "// Events\n" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
		{ "ToolTip", "Events" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaCharacter_IdleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaCharacter, nullptr, "IdleState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArenaCharacter_IdleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaCharacter_IdleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArenaCharacter_IdleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArenaCharacter_IdleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArenaCharacter_Move_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArenaCharacter_Move_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arena Character" },
		{ "Comment", "// Functions\n" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaCharacter, nullptr, "Move", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArenaCharacter_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaCharacter_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArenaCharacter_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArenaCharacter_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics
	{
		struct ArenaCharacter_eventPlayFlipbook_Parms
		{
			UPaperFlipbook* flipbook;
			bool loop;
		};
		static void NewProp_loop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_loop;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_flipbook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics::NewProp_loop_SetBit(void* Obj)
	{
		((ArenaCharacter_eventPlayFlipbook_Parms*)Obj)->loop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics::NewProp_loop = { "loop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ArenaCharacter_eventPlayFlipbook_Parms), &Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics::NewProp_loop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics::NewProp_flipbook = { "flipbook", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArenaCharacter_eventPlayFlipbook_Parms, flipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics::NewProp_loop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics::NewProp_flipbook,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arena Character" },
		{ "CPP_Default_loop", "false" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaCharacter, nullptr, "PlayFlipbook", nullptr, nullptr, sizeof(ArenaCharacter_eventPlayFlipbook_Parms), Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArenaCharacter_PlayFlipbook()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArenaCharacter_PlayFlipbook_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArenaCharacter_SetVelocity_Statics
	{
		struct ArenaCharacter_eventSetVelocity_Parms
		{
			FVector velocity;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_velocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AArenaCharacter_SetVelocity_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ArenaCharacter_eventSetVelocity_Parms, velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AArenaCharacter_SetVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AArenaCharacter_SetVelocity_Statics::NewProp_velocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArenaCharacter_SetVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arena Character" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaCharacter_SetVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaCharacter, nullptr, "SetVelocity", nullptr, nullptr, sizeof(ArenaCharacter_eventSetVelocity_Parms), Z_Construct_UFunction_AArenaCharacter_SetVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaCharacter_SetVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArenaCharacter_SetVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaCharacter_SetVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArenaCharacter_SetVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArenaCharacter_SetVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AArenaCharacter_WalkingState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AArenaCharacter_WalkingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Arena Character" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AArenaCharacter_WalkingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AArenaCharacter, nullptr, "WalkingState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AArenaCharacter_WalkingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AArenaCharacter_WalkingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AArenaCharacter_WalkingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AArenaCharacter_WalkingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AArenaCharacter_NoRegister()
	{
		return AArenaCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AArenaCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isAttacking_MetaData[];
#endif
		static void NewProp_isAttacking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAttacking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isMoving_MetaData[];
#endif
		static void NewProp_isMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkingAnimations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WalkingAnimations;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WalkingAnimations_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WalkingAnimations_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimations_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_IdleAnimations;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IdleAnimations_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleAnimations_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Facing_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Facing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterState_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArenaCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelArena,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AArenaCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AArenaCharacter_AbilityState, "AbilityState" }, // 2565573199
		{ &Z_Construct_UFunction_AArenaCharacter_AnimationFinished, "AnimationFinished" }, // 1895063576
		{ &Z_Construct_UFunction_AArenaCharacter_ApplyVelocity, "ApplyVelocity" }, // 2440099062
		{ &Z_Construct_UFunction_AArenaCharacter_AttackState, "AttackState" }, // 679834077
		{ &Z_Construct_UFunction_AArenaCharacter_FinishAttack, "FinishAttack" }, // 2013707864
		{ &Z_Construct_UFunction_AArenaCharacter_IdleState, "IdleState" }, // 2097150825
		{ &Z_Construct_UFunction_AArenaCharacter_Move, "Move" }, // 4035545374
		{ &Z_Construct_UFunction_AArenaCharacter_PlayFlipbook, "PlayFlipbook" }, // 373900240
		{ &Z_Construct_UFunction_AArenaCharacter_SetVelocity, "SetVelocity" }, // 3854272122
		{ &Z_Construct_UFunction_AArenaCharacter_WalkingState, "WalkingState" }, // 2636993546
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ArenaCharacter.h" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaCharacter_Statics::NewProp_isAttacking_MetaData[] = {
		{ "Category", "Arena Character|State" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AArenaCharacter_Statics::NewProp_isAttacking_SetBit(void* Obj)
	{
		((AArenaCharacter*)Obj)->isAttacking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArenaCharacter_Statics::NewProp_isAttacking = { "isAttacking", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AArenaCharacter), &Z_Construct_UClass_AArenaCharacter_Statics::NewProp_isAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_isAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_isAttacking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaCharacter_Statics::NewProp_isMoving_MetaData[] = {
		{ "Category", "Arena Character|State" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AArenaCharacter_Statics::NewProp_isMoving_SetBit(void* Obj)
	{
		((AArenaCharacter*)Obj)->isMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AArenaCharacter_Statics::NewProp_isMoving = { "isMoving", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AArenaCharacter), &Z_Construct_UClass_AArenaCharacter_Statics::NewProp_isMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_isMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_isMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaCharacter_Statics::NewProp_WalkingAnimations_MetaData[] = {
		{ "Category", "Arena Character|Animations" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AArenaCharacter_Statics::NewProp_WalkingAnimations = { "WalkingAnimations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArenaCharacter, WalkingAnimations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_WalkingAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_WalkingAnimations_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AArenaCharacter_Statics::NewProp_WalkingAnimations_Key_KeyProp = { "WalkingAnimations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PixelArena_Direction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaCharacter_Statics::NewProp_WalkingAnimations_ValueProp = { "WalkingAnimations", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaCharacter_Statics::NewProp_IdleAnimations_MetaData[] = {
		{ "Category", "Arena Character|Animations" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AArenaCharacter_Statics::NewProp_IdleAnimations = { "IdleAnimations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArenaCharacter, IdleAnimations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_IdleAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_IdleAnimations_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AArenaCharacter_Statics::NewProp_IdleAnimations_Key_KeyProp = { "IdleAnimations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_PixelArena_Direction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArenaCharacter_Statics::NewProp_IdleAnimations_ValueProp = { "IdleAnimations", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaCharacter_Statics::NewProp_Facing_MetaData[] = {
		{ "Category", "Arena Character|State" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AArenaCharacter_Statics::NewProp_Facing = { "Facing", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArenaCharacter, Facing), Z_Construct_UEnum_PixelArena_Direction, METADATA_PARAMS(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_Facing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_Facing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaCharacter_Statics::NewProp_CharacterState_MetaData[] = {
		{ "Category", "Arena Character|State" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AArenaCharacter_Statics::NewProp_CharacterState = { "CharacterState", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArenaCharacter, CharacterState), Z_Construct_UEnum_PixelArena_CharacterState, METADATA_PARAMS(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_CharacterState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_CharacterState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaCharacter_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Arena Character" },
		{ "Comment", "// Properties\n" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
		{ "ToolTip", "Properties" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AArenaCharacter_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArenaCharacter, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_MoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArenaCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaCharacter_Statics::NewProp_isAttacking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaCharacter_Statics::NewProp_isMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaCharacter_Statics::NewProp_WalkingAnimations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaCharacter_Statics::NewProp_WalkingAnimations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaCharacter_Statics::NewProp_WalkingAnimations_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaCharacter_Statics::NewProp_IdleAnimations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaCharacter_Statics::NewProp_IdleAnimations_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaCharacter_Statics::NewProp_IdleAnimations_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaCharacter_Statics::NewProp_Facing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaCharacter_Statics::NewProp_CharacterState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArenaCharacter_Statics::NewProp_MoveSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArenaCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArenaCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArenaCharacter_Statics::ClassParams = {
		&AArenaCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AArenaCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AArenaCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AArenaCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArenaCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArenaCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArenaCharacter, 3703195437);
	template<> PIXELARENA_API UClass* StaticClass<AArenaCharacter>()
	{
		return AArenaCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArenaCharacter(Z_Construct_UClass_AArenaCharacter, &AArenaCharacter::StaticClass, TEXT("/Script/PixelArena"), TEXT("AArenaCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArenaCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
