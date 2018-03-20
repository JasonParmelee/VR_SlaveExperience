// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SLAVEVREXPERIENCE_FoodTeleporter_generated_h
#error "FoodTeleporter.generated.h already included, missing '#pragma once' in FoodTeleporter.h"
#endif
#define SLAVEVREXPERIENCE_FoodTeleporter_generated_h

#define SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFoodTeleporter(); \
	friend SLAVEVREXPERIENCE_API class UClass* Z_Construct_UClass_AFoodTeleporter(); \
public: \
	DECLARE_CLASS(AFoodTeleporter, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SlaveVRExperience"), NO_API) \
	DECLARE_SERIALIZER(AFoodTeleporter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFoodTeleporter(); \
	friend SLAVEVREXPERIENCE_API class UClass* Z_Construct_UClass_AFoodTeleporter(); \
public: \
	DECLARE_CLASS(AFoodTeleporter, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SlaveVRExperience"), NO_API) \
	DECLARE_SERIALIZER(AFoodTeleporter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFoodTeleporter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFoodTeleporter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFoodTeleporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFoodTeleporter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFoodTeleporter(AFoodTeleporter&&); \
	NO_API AFoodTeleporter(const AFoodTeleporter&); \
public:


#define SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFoodTeleporter(AFoodTeleporter&&); \
	NO_API AFoodTeleporter(const AFoodTeleporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFoodTeleporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFoodTeleporter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFoodTeleporter)


#define SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_PRIVATE_PROPERTY_OFFSET
#define SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_11_PROLOG
#define SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_PRIVATE_PROPERTY_OFFSET \
	SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_RPC_WRAPPERS \
	SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_INCLASS \
	SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_PRIVATE_PROPERTY_OFFSET \
	SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_INCLASS_NO_PURE_DECLS \
	SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SlaveVRExperience_Source_SlaveVRExperience_FoodTeleporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
