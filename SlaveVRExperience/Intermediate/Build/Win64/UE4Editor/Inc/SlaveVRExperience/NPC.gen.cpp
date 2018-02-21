// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "NPC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC() {}
// Cross Module References
	SLAVEVREXPERIENCE_API UEnum* Z_Construct_UEnum_SlaveVRExperience_ENPCStateEnum();
	UPackage* Z_Construct_UPackage__Script_SlaveVRExperience();
	SLAVEVREXPERIENCE_API UEnum* Z_Construct_UEnum_SlaveVRExperience_ENPCTypeEnum();
	SLAVEVREXPERIENCE_API UClass* Z_Construct_UClass_ANPC_NoRegister();
	SLAVEVREXPERIENCE_API UClass* Z_Construct_UClass_ANPC();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	SLAVEVREXPERIENCE_API UFunction* Z_Construct_UFunction_ANPC_Debug1();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* ENPCStateEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlaveVRExperience_ENPCStateEnum, Z_Construct_UPackage__Script_SlaveVRExperience(), TEXT("ENPCStateEnum"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENPCStateEnum(ENPCStateEnum_StaticEnum, TEXT("/Script/SlaveVRExperience"), TEXT("ENPCStateEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlaveVRExperience_ENPCStateEnum_CRC() { return 3423611336U; }
	UEnum* Z_Construct_UEnum_SlaveVRExperience_ENPCStateEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlaveVRExperience();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENPCStateEnum"), 0, Get_Z_Construct_UEnum_SlaveVRExperience_ENPCStateEnum_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENPCStateEnum::VE_Idle", (int64)ENPCStateEnum::VE_Idle },
				{ "ENPCStateEnum::VE_MoveToTarget", (int64)ENPCStateEnum::VE_MoveToTarget },
				{ "ENPCStateEnum::VE_WorkstationBegin", (int64)ENPCStateEnum::VE_WorkstationBegin },
				{ "ENPCStateEnum::VE_WorkstationLoop", (int64)ENPCStateEnum::VE_WorkstationLoop },
				{ "ENPCStateEnum::VE_WorkstationExit", (int64)ENPCStateEnum::VE_WorkstationExit },
				{ "ENPCStateEnum::VE_MoveToPlayer", (int64)ENPCStateEnum::VE_MoveToPlayer },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "NPC.h" },
				{ "ToolTip", "\"BlueprintType\" is essential to include" },
				{ "VE_Idle.DisplayName", "Idle" },
				{ "VE_MoveToPlayer.DisplayName", "MoveToPlayer" },
				{ "VE_MoveToTarget.DisplayName", "MoveToTarget" },
				{ "VE_WorkstationBegin.DisplayName", "WorkstationBegin" },
				{ "VE_WorkstationExit.DisplayName", "WorkstationExit" },
				{ "VE_WorkstationLoop.DisplayName", "WorkstationLoop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlaveVRExperience,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ENPCStateEnum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ENPCStateEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ENPCTypeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlaveVRExperience_ENPCTypeEnum, Z_Construct_UPackage__Script_SlaveVRExperience(), TEXT("ENPCTypeEnum"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENPCTypeEnum(ENPCTypeEnum_StaticEnum, TEXT("/Script/SlaveVRExperience"), TEXT("ENPCTypeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlaveVRExperience_ENPCTypeEnum_CRC() { return 3403412489U; }
	UEnum* Z_Construct_UEnum_SlaveVRExperience_ENPCTypeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlaveVRExperience();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENPCTypeEnum"), 0, Get_Z_Construct_UEnum_SlaveVRExperience_ENPCTypeEnum_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENPCTypeEnum::VE_Default", (int64)ENPCTypeEnum::VE_Default },
				{ "ENPCTypeEnum::VE_Slave", (int64)ENPCTypeEnum::VE_Slave },
				{ "ENPCTypeEnum::VE_Guard", (int64)ENPCTypeEnum::VE_Guard },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "NPC.h" },
				{ "ToolTip", "\"BlueprintType\" is essential to include" },
				{ "VE_Default.DisplayName", "Default" },
				{ "VE_Guard.DisplayName", "Guard" },
				{ "VE_Slave.DisplayName", "Slave" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlaveVRExperience,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ENPCTypeEnum",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ENPCTypeEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ANPC::StaticRegisterNativesANPC()
	{
		UClass* Class = ANPC::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Debug1", (Native)&ANPC::execDebug1 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ANPC_Debug1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "NPC.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPC, "Debug1", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANPC_NoRegister()
	{
		return ANPC::StaticClass();
	}
	UClass* Z_Construct_UClass_ANPC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_SlaveVRExperience,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ANPC_Debug1, "Debug1" }, // 2066042492
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "NPC.h" },
				{ "ModuleRelativePath", "NPC.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "NPC.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor = { UE4CodeGen_Private::EPropertyClass::Object, "TargetActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ANPC, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_TargetActor_MetaData, ARRAY_COUNT(NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDelta_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "NPC.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentDelta = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentDelta", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ANPC, CurrentDelta), METADATA_PARAMS(NewProp_CurrentDelta_MetaData, ARRAY_COUNT(NewProp_CurrentDelta_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCMaxSpeed_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "NPC.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NPCMaxSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "NPCMaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ANPC, NPCMaxSpeed), METADATA_PARAMS(NewProp_NPCMaxSpeed_MetaData, ARRAY_COUNT(NewProp_NPCMaxSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCState_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "NPC.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NPCState = { UE4CodeGen_Private::EPropertyClass::Enum, "NPCState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ANPC, NPCState), Z_Construct_UEnum_SlaveVRExperience_ENPCStateEnum, METADATA_PARAMS(NewProp_NPCState_MetaData, ARRAY_COUNT(NewProp_NPCState_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NPCState_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCType_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "NPC.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NPCType = { UE4CodeGen_Private::EPropertyClass::Enum, "NPCType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ANPC, NPCType), Z_Construct_UEnum_SlaveVRExperience_ENPCTypeEnum, METADATA_PARAMS(NewProp_NPCType_MetaData, ARRAY_COUNT(NewProp_NPCType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NPCType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentDelta,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NPCMaxSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NPCState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NPCState_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NPCType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NPCType_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANPC>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANPC::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPC, 3138161624);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPC(Z_Construct_UClass_ANPC, &ANPC::StaticClass, TEXT("/Script/SlaveVRExperience"), TEXT("ANPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
