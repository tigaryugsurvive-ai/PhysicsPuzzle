// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerBall.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICSPUZZLE_PlayerBall_generated_h
#error "PlayerBall.generated.h already included, missing '#pragma once' in PlayerBall.h"
#endif
#define PHYSICSPUZZLE_PlayerBall_generated_h

#define FID_UEProject_PhysicsPuzzle_Source_PhysicsPuzzle_Public_PlayerBall_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerBall(); \
	friend struct Z_Construct_UClass_APlayerBall_Statics; \
public: \
	DECLARE_CLASS(APlayerBall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsPuzzle"), NO_API) \
	DECLARE_SERIALIZER(APlayerBall)


#define FID_UEProject_PhysicsPuzzle_Source_PhysicsPuzzle_Public_PlayerBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerBall(APlayerBall&&); \
	APlayerBall(const APlayerBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerBall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerBall) \
	NO_API virtual ~APlayerBall();


#define FID_UEProject_PhysicsPuzzle_Source_PhysicsPuzzle_Public_PlayerBall_h_9_PROLOG
#define FID_UEProject_PhysicsPuzzle_Source_PhysicsPuzzle_Public_PlayerBall_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProject_PhysicsPuzzle_Source_PhysicsPuzzle_Public_PlayerBall_h_12_INCLASS_NO_PURE_DECLS \
	FID_UEProject_PhysicsPuzzle_Source_PhysicsPuzzle_Public_PlayerBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICSPUZZLE_API UClass* StaticClass<class APlayerBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProject_PhysicsPuzzle_Source_PhysicsPuzzle_Public_PlayerBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
