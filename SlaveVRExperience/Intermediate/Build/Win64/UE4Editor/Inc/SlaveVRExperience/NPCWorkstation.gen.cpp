// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "NPCWorkstation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCWorkstation() {}
// Cross Module References
	SLAVEVREXPERIENCE_API UClass* Z_Construct_UClass_ANPCWorkstation_NoRegister();
	SLAVEVREXPERIENCE_API UClass* Z_Construct_UClass_ANPCWorkstation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SlaveVRExperience();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	void ANPCWorkstation::StaticRegisterNativesANPCWorkstation()
	{
	}
	UClass* Z_Construct_UClass_ANPCWorkstation_NoRegister()
	{
		return ANPCWorkstation::StaticClass();
	}
	UClass* Z_Construct_UClass_ANPCWorkstation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_SlaveVRExperience,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "NPCWorkstation.h" },
				{ "ModuleRelativePath", "NPCWorkstation.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationOrigin_MetaData[] = {
				{ "Category", "NPCWorkstation" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "NPCWorkstation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationOrigin = { UE4CodeGen_Private::EPropertyClass::Object, "AnimationOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ANPCWorkstation, AnimationOrigin), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_AnimationOrigin_MetaData, ARRAY_COUNT(NewProp_AnimationOrigin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
				{ "Category", "NPCWorkstation" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "NPCWorkstation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionBox = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionBox", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000008000d, 1, nullptr, STRUCT_OFFSET(ANPCWorkstation, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_CollisionBox_MetaData, ARRAY_COUNT(NewProp_CollisionBox_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropSocket_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "NPCWorkstation.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropSocket = { UE4CodeGen_Private::EPropertyClass::Name, "PropSocket", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ANPCWorkstation, PropSocket), METADATA_PARAMS(NewProp_PropSocket_MetaData, ARRAY_COUNT(NewProp_PropSocket_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prop_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "NPCWorkstation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Prop = { UE4CodeGen_Private::EPropertyClass::Object, "Prop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ANPCWorkstation, Prop), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_Prop_MetaData, ARRAY_COUNT(NewProp_Prop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitAnimationAnimation_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "NPCWorkstation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitAnimationAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "ExitAnimationAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ANPCWorkstation, ExitAnimationAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(NewProp_ExitAnimationAnimation_MetaData, ARRAY_COUNT(NewProp_ExitAnimationAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnterAnimation_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "NPCWorkstation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnterAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "EnterAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ANPCWorkstation, EnterAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(NewProp_EnterAnimation_MetaData, ARRAY_COUNT(NewProp_EnterAnimation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainAnimation_MetaData[] = {
				{ "Category", "Settings" },
				{ "ModuleRelativePath", "NPCWorkstation.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainAnimation = { UE4CodeGen_Private::EPropertyClass::Object, "MainAnimation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ANPCWorkstation, MainAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(NewProp_MainAnimation_MetaData, ARRAY_COUNT(NewProp_MainAnimation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationOrigin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionBox,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropSocket,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Prop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExitAnimationAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnterAnimation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MainAnimation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANPCWorkstation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANPCWorkstation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(ANPCWorkstation, 2823830714);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPCWorkstation(Z_Construct_UClass_ANPCWorkstation, &ANPCWorkstation::StaticClass, TEXT("/Script/SlaveVRExperience"), TEXT("ANPCWorkstation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCWorkstation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
