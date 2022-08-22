// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/InventorySystemGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySystemGameMode() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInventorySystemGameMode_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AInventorySystemGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	void AInventorySystemGameMode::StaticRegisterNativesAInventorySystemGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInventorySystemGameMode);
	UClass* Z_Construct_UClass_AInventorySystemGameMode_NoRegister()
	{
		return AInventorySystemGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AInventorySystemGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventorySystemGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventorySystemGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "InventorySystemGameMode.h" },
		{ "ModuleRelativePath", "InventorySystemGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventorySystemGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventorySystemGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInventorySystemGameMode_Statics::ClassParams = {
		&AInventorySystemGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInventorySystemGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventorySystemGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventorySystemGameMode()
	{
		if (!Z_Registration_Info_UClass_AInventorySystemGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInventorySystemGameMode.OuterSingleton, Z_Construct_UClass_AInventorySystemGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInventorySystemGameMode.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<AInventorySystemGameMode>()
	{
		return AInventorySystemGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventorySystemGameMode);
	struct Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInventorySystemGameMode, AInventorySystemGameMode::StaticClass, TEXT("AInventorySystemGameMode"), &Z_Registration_Info_UClass_AInventorySystemGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInventorySystemGameMode), 67548864U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h_3602110185(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventorySystemGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
