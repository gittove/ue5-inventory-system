// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AInventorySystemCharacter;
#ifdef INVENTORYSYSTEM_ItemBase_generated_h
#error "ItemBase.generated.h already included, missing '#pragma once' in ItemBase.h"
#endif
#define INVENTORYSYSTEM_ItemBase_generated_h

#define FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_SPARSE_DATA
#define FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_RPC_WRAPPERS
#define FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_EVENT_PARMS \
	struct ItemBase_eventOnUse_Parms \
	{ \
		AInventorySystemCharacter* Character; \
	};


#define FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_CALLBACK_WRAPPERS
#define FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemBase(); \
	friend struct Z_Construct_UClass_UItemBase_Statics; \
public: \
	DECLARE_CLASS(UItemBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UItemBase)


#define FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUItemBase(); \
	friend struct Z_Construct_UClass_UItemBase_Statics; \
public: \
	DECLARE_CLASS(UItemBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UItemBase)


#define FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemBase(UItemBase&&); \
	NO_API UItemBase(const UItemBase&); \
public:


#define FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemBase(UItemBase&&); \
	NO_API UItemBase(const UItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UItemBase)


#define FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_7_PROLOG \
	FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_EVENT_PARMS


#define FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_SPARSE_DATA \
	FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_RPC_WRAPPERS \
	FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_CALLBACK_WRAPPERS \
	FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_INCLASS \
	FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_SPARSE_DATA \
	FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_CALLBACK_WRAPPERS \
	FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InventorySystem_Source_InventorySystem_InventoryScripts_ItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
