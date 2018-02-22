// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLAVEVREXPERIENCE_CustomPlayerController_generated_h
#error "CustomPlayerController.generated.h already included, missing '#pragma once' in CustomPlayerController.h"
#endif
#define SLAVEVREXPERIENCE_CustomPlayerController_generated_h

#define SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebug1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Debug1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetupInputComponent(); \
		P_NATIVE_END; \
	}


#define SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebug1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Debug1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetupInputComponent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetupInputComponent(); \
		P_NATIVE_END; \
	}


#define SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomPlayerController(); \
	friend SLAVEVREXPERIENCE_API class UClass* Z_Construct_UClass_ACustomPlayerController(); \
public: \
	DECLARE_CLASS(ACustomPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/SlaveVRExperience"), NO_API) \
	DECLARE_SERIALIZER(ACustomPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACustomPlayerController(); \
	friend SLAVEVREXPERIENCE_API class UClass* Z_Construct_UClass_ACustomPlayerController(); \
public: \
	DECLARE_CLASS(ACustomPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/SlaveVRExperience"), NO_API) \
	DECLARE_SERIALIZER(ACustomPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomPlayerController(ACustomPlayerController&&); \
	NO_API ACustomPlayerController(const ACustomPlayerController&); \
public:


#define SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomPlayerController(ACustomPlayerController&&); \
	NO_API ACustomPlayerController(const ACustomPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomPlayerController)


#define SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_12_PROLOG
#define SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_RPC_WRAPPERS \
	SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_INCLASS \
	SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SlaveVRExperience_Source_SlaveVRExperience_CustomPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
