// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/CC_PlayerController.h"

#ifdef CRASHCOURSEGAS_CC_PlayerController_generated_h
#error "CC_PlayerController.generated.h already included, missing '#pragma once' in CC_PlayerController.h"
#endif
#define CRASHCOURSEGAS_CC_PlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACC_PlayerController *****************************************************
CRASHCOURSEGAS_API UClass* Z_Construct_UClass_ACC_PlayerController_NoRegister();

#define FID_Game_Projects_CrashCourseGAS_Source_CrashCourseGAS_Public_Player_CC_PlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_PlayerController(); \
	friend struct Z_Construct_UClass_ACC_PlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CRASHCOURSEGAS_API UClass* Z_Construct_UClass_ACC_PlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACC_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrashCourseGAS"), Z_Construct_UClass_ACC_PlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACC_PlayerController)


#define FID_Game_Projects_CrashCourseGAS_Source_CrashCourseGAS_Public_Player_CC_PlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACC_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACC_PlayerController(ACC_PlayerController&&) = delete; \
	ACC_PlayerController(const ACC_PlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACC_PlayerController) \
	NO_API virtual ~ACC_PlayerController();


#define FID_Game_Projects_CrashCourseGAS_Source_CrashCourseGAS_Public_Player_CC_PlayerController_h_13_PROLOG
#define FID_Game_Projects_CrashCourseGAS_Source_CrashCourseGAS_Public_Player_CC_PlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Game_Projects_CrashCourseGAS_Source_CrashCourseGAS_Public_Player_CC_PlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_Game_Projects_CrashCourseGAS_Source_CrashCourseGAS_Public_Player_CC_PlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACC_PlayerController;

// ********** End Class ACC_PlayerController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Game_Projects_CrashCourseGAS_Source_CrashCourseGAS_Public_Player_CC_PlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
