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
	PIXELARENA_API UClass* Z_Construct_UClass_AArenaCharacter_NoRegister();
	PIXELARENA_API UClass* Z_Construct_UClass_AArenaCharacter();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	UPackage* Z_Construct_UPackage__Script_PixelArena();
// End Cross Module References
	void AArenaCharacter::StaticRegisterNativesAArenaCharacter()
	{
	}
	UClass* Z_Construct_UClass_AArenaCharacter_NoRegister()
	{
		return AArenaCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AArenaCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArenaCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaperCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_PixelArena,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ArenaCharacter.h" },
		{ "ModuleRelativePath", "ArenaCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArenaCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArenaCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArenaCharacter_Statics::ClassParams = {
		&AArenaCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AArenaCharacter, 2136187610);
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
