// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLAVEVREXPERIENCE_NPC_generated_h
#error "NPC.generated.h already included, missing '#pragma once' in NPC.h"
#endif
#define SLAVEVREXPERIENCE_NPC_generated_h

#define SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDebug1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Debug1(); \
		P_NATIVE_END; \
	}


#define SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDebug1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Debug1(); \
		P_NATIVE_END; \
	}


#define SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend SLAVEVREXPERIENCE_API class UClass* Z_Construct_UClass_ANPC(); \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SlaveVRExperience"), NO_API) \
	DECLARE_SERIALIZER(ANPC) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_INCLASS \
private: \
	static void StaticRegisterNativesANPC(); \
	friend SLAVEVREXPERIENCE_API class UClass* Z_Construct_UClass_ANPC(); \
public: \
	DECLARE_CLASS(ANPC, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/SlaveVRExperience"), NO_API) \
	DECLARE_SERIALIZER(ANPC) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANPC(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public:


#define SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANPC(ANPC&&); \
	NO_API ANPC(const ANPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANPC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANPC)


#define SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NPCType() { return STRUCT_OFFSET(ANPC, NPCType); } \
	FORCEINLINE static uint32 __PPO__NPCState() { return STRUCT_OFFSET(ANPC, NPCState); } \
	FORCEINLINE static uint32 __PPO__NPCMaxSpeed() { return STRUCT_OFFSET(ANPC, NPCMaxSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentDelta() { return STRUCT_OFFSET(ANPC, CurrentDelta); } \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(ANPC, TargetActor); }


#define SlaveVRExperience_Source_SlaveVRExperience_NPC_h_28_PROLOG
#define SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_PRIVATE_PROPERTY_OFFSET \
	SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_RPC_WRAPPERS \
	SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_INCLASS \
	SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_PRIVATE_PROPERTY_OFFSET \
	SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_INCLASS_NO_PURE_DECLS \
	SlaveVRExperience_Source_SlaveVRExperience_NPC_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SlaveVRExperience_Source_SlaveVRExperience_NPC_h


#define FOREACH_ENUM_ENPCSTATEENUM(op) \
	op(ENPCStateEnum::VE_Idle) \
	op(ENPCStateEnum::VE_MoveToTarget) \
	op(ENPCStateEnum::VE_WorkstationBegin) \
	op(ENPCStateEnum::VE_WorkstationLoop) \
	op(ENPCStateEnum::VE_WorkstationExit) 
#define FOREACH_ENUM_ENPCTYPEENUM(op) \
	op(ENPCTypeEnum::VE_Default) \
	op(ENPCTypeEnum::VE_Slave) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
