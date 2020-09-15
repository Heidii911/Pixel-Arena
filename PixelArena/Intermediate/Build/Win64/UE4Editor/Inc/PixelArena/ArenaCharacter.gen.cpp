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
	uint32 Get_Z_Construct_UEnum_PixelArena_CharacterState_Hash() { return 2034238391U; }
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
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
	DEFINE_FUNCTION(AArenaCharacter::execMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move();
		P_NATIVE_END;
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
			{ "Move", &AArenaCharacter::execMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "ModuleRelativePath", "ArenaCharacter.h" },
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
		{ &Z_Construct_UFunction_AArenaCharacter_IdleState, "IdleState" }, // 3704747972
		{ &Z_Construct_UFunction_AArenaCharacter_Move, "Move" }, // 4035545374
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaCharacter_Statics::NewProp_Facing_MetaData[] = {
		{ "Category", "Arena Character" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AArenaCharacter_Statics::NewProp_Facing = { "Facing", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArenaCharacter, Facing), Z_Construct_UEnum_PixelArena_Direction, METADATA_PARAMS(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_Facing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaCharacter_Statics::NewProp_Facing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaCharacter_Statics::NewProp_CharacterState_MetaData[] = {
		{ "Category", "Arena Character" },
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
	IMPLEMENT_CLASS(AArenaCharacter, 2218524017);
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
