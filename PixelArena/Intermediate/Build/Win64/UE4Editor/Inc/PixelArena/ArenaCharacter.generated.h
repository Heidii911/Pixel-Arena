// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PIXELARENA_ArenaCharacter_generated_h
#error "ArenaCharacter.generated.h already included, missing '#pragma once' in ArenaCharacter.h"
#endif
#define PIXELARENA_ArenaCharacter_generated_h

#define PixelArena_Source_PixelArena_ArenaCharacter_h_34_SPARSE_DATA
#define PixelArena_Source_PixelArena_ArenaCharacter_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyVelocity); \
	DECLARE_FUNCTION(execMove);


#define PixelArena_Source_PixelArena_ArenaCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyVelocity); \
	DECLARE_FUNCTION(execMove);


#define PixelArena_Source_PixelArena_ArenaCharacter_h_34_EVENT_PARMS
#define PixelArena_Source_PixelArena_ArenaCharacter_h_34_CALLBACK_WRAPPERS
#define PixelArena_Source_PixelArena_ArenaCharacter_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArenaCharacter(); \
	friend struct Z_Construct_UClass_AArenaCharacter_Statics; \
public: \
	DECLARE_CLASS(AArenaCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelArena"), NO_API) \
	DECLARE_SERIALIZER(AArenaCharacter)


#define PixelArena_Source_PixelArena_ArenaCharacter_h_34_INCLASS \
private: \
	static void StaticRegisterNativesAArenaCharacter(); \
	friend struct Z_Construct_UClass_AArenaCharacter_Statics; \
public: \
	DECLARE_CLASS(AArenaCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PixelArena"), NO_API) \
	DECLARE_SERIALIZER(AArenaCharacter)


#define PixelArena_Source_PixelArena_ArenaCharacter_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArenaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArenaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArenaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArenaCharacter(AArenaCharacter&&); \
	NO_API AArenaCharacter(const AArenaCharacter&); \
public:


#define PixelArena_Source_PixelArena_ArenaCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArenaCharacter(AArenaCharacter&&); \
	NO_API AArenaCharacter(const AArenaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArenaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArenaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArenaCharacter)


#define PixelArena_Source_PixelArena_ArenaCharacter_h_34_PRIVATE_PROPERTY_OFFSET
#define PixelArena_Source_PixelArena_ArenaCharacter_h_31_PROLOG \
	PixelArena_Source_PixelArena_ArenaCharacter_h_34_EVENT_PARMS


#define PixelArena_Source_PixelArena_ArenaCharacter_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PixelArena_Source_PixelArena_ArenaCharacter_h_34_PRIVATE_PROPERTY_OFFSET \
	PixelArena_Source_PixelArena_ArenaCharacter_h_34_SPARSE_DATA \
	PixelArena_Source_PixelArena_ArenaCharacter_h_34_RPC_WRAPPERS \
	PixelArena_Source_PixelArena_ArenaCharacter_h_34_CALLBACK_WRAPPERS \
	PixelArena_Source_PixelArena_ArenaCharacter_h_34_INCLASS \
	PixelArena_Source_PixelArena_ArenaCharacter_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PixelArena_Source_PixelArena_ArenaCharacter_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PixelArena_Source_PixelArena_ArenaCharacter_h_34_PRIVATE_PROPERTY_OFFSET \
	PixelArena_Source_PixelArena_ArenaCharacter_h_34_SPARSE_DATA \
	PixelArena_Source_PixelArena_ArenaCharacter_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	PixelArena_Source_PixelArena_ArenaCharacter_h_34_CALLBACK_WRAPPERS \
	PixelArena_Source_PixelArena_ArenaCharacter_h_34_INCLASS_NO_PURE_DECLS \
	PixelArena_Source_PixelArena_ArenaCharacter_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PIXELARENA_API UClass* StaticClass<class AArenaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PixelArena_Source_PixelArena_ArenaCharacter_h


#define FOREACH_ENUM_DIRECTION(op) \
	op(North) \
	op(East) \
	op(South) \
	op(West) 
#define FOREACH_ENUM_CHARACTERSTATE(op) \
	op(Idle) \
	op(Walking) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
