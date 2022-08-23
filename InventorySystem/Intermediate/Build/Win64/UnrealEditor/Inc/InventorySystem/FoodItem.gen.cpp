// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/InventoryScripts/FoodItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoodItem() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UFoodItem_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UFoodItem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	void UFoodItem::StaticRegisterNativesUFoodItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoodItem);
	UClass* Z_Construct_UClass_UFoodItem_NoRegister()
	{
		return UFoodItem::StaticClass();
	}
	struct Z_Construct_UClass_UFoodItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoodItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoodItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryScripts/FoodItem.h" },
		{ "ModuleRelativePath", "InventoryScripts/FoodItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoodItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoodItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoodItem_Statics::ClassParams = {
		&UFoodItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoodItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoodItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoodItem()
	{
		if (!Z_Registration_Info_UClass_UFoodItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoodItem.OuterSingleton, Z_Construct_UClass_UFoodItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoodItem.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UFoodItem>()
	{
		return UFoodItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoodItem);
	struct Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventoryScripts_FoodItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventoryScripts_FoodItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoodItem, UFoodItem::StaticClass, TEXT("UFoodItem"), &Z_Registration_Info_UClass_UFoodItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoodItem), 4091067796U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventoryScripts_FoodItem_h_2970029067(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventoryScripts_FoodItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventoryScripts_FoodItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
