// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/InventoryScripts/BombItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombItem() {}
// Cross Module References
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBombItem_NoRegister();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UBombItem();
	INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemBase();
	UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References
	void UBombItem::StaticRegisterNativesUBombItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBombItem);
	UClass* Z_Construct_UClass_UBombItem_NoRegister()
	{
		return UBombItem::StaticClass();
	}
	struct Z_Construct_UClass_UBombItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBombItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBombItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryScripts/BombItem.h" },
		{ "ModuleRelativePath", "InventoryScripts/BombItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBombItem_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "BombItem" },
		{ "ModuleRelativePath", "InventoryScripts/BombItem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBombItem_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBombItem, Radius), METADATA_PARAMS(Z_Construct_UClass_UBombItem_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBombItem_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBombItem_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "BombItem" },
		{ "ModuleRelativePath", "InventoryScripts/BombItem.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBombItem_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBombItem, Damage), METADATA_PARAMS(Z_Construct_UClass_UBombItem_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBombItem_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBombItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBombItem_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBombItem_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBombItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBombItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBombItem_Statics::ClassParams = {
		&UBombItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBombItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBombItem_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBombItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBombItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBombItem()
	{
		if (!Z_Registration_Info_UClass_UBombItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBombItem.OuterSingleton, Z_Construct_UClass_UBombItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBombItem.OuterSingleton;
	}
	template<> INVENTORYSYSTEM_API UClass* StaticClass<UBombItem>()
	{
		return UBombItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBombItem);
	struct Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventoryScripts_BombItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventoryScripts_BombItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBombItem, UBombItem::StaticClass, TEXT("UBombItem"), &Z_Registration_Info_UClass_UBombItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBombItem), 518984860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventoryScripts_BombItem_h_1779524910(TEXT("/Script/InventorySystem"),
		Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventoryScripts_BombItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_InventorySystem_Source_InventorySystem_InventoryScripts_BombItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
