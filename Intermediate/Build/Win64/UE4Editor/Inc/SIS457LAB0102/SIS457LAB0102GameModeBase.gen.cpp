// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SIS457LAB0102/SIS457LAB0102GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIS457LAB0102GameModeBase() {}
// Cross Module References
	SIS457LAB0102_API UClass* Z_Construct_UClass_ASIS457LAB0102GameModeBase_NoRegister();
	SIS457LAB0102_API UClass* Z_Construct_UClass_ASIS457LAB0102GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SIS457LAB0102();
// End Cross Module References
	void ASIS457LAB0102GameModeBase::StaticRegisterNativesASIS457LAB0102GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ASIS457LAB0102GameModeBase_NoRegister()
	{
		return ASIS457LAB0102GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASIS457LAB0102GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASIS457LAB0102GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SIS457LAB0102,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASIS457LAB0102GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SIS457LAB0102GameModeBase.h" },
		{ "ModuleRelativePath", "SIS457LAB0102GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASIS457LAB0102GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASIS457LAB0102GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASIS457LAB0102GameModeBase_Statics::ClassParams = {
		&ASIS457LAB0102GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASIS457LAB0102GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASIS457LAB0102GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASIS457LAB0102GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASIS457LAB0102GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASIS457LAB0102GameModeBase, 1381999873);
	template<> SIS457LAB0102_API UClass* StaticClass<ASIS457LAB0102GameModeBase>()
	{
		return ASIS457LAB0102GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASIS457LAB0102GameModeBase(Z_Construct_UClass_ASIS457LAB0102GameModeBase, &ASIS457LAB0102GameModeBase::StaticClass, TEXT("/Script/SIS457LAB0102"), TEXT("ASIS457LAB0102GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASIS457LAB0102GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
