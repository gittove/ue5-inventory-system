// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemBase;
#ifdef INVENTORYSYSTEM_InventorySystemCharacter_generated_h
#error "InventorySystemCharacter.generated.h already included, missing '#pragma once' in InventorySystemCharacter.h"
#endif
#define INVENTORYSYSTEM_InventorySystemCharacter_generated_h

#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_SPARSE_DATA
#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUseItem);


#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUseItem);


#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventorySystemCharacter(); \
	friend struct Z_Construct_UClass_AInventorySystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AInventorySystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(AInventorySystemCharacter)


#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAInventorySystemCharacter(); \
	friend struct Z_Construct_UClass_AInventorySystemCharacter_Statics; \
public: \
	DECLARE_CLASS(AInventorySystemCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(AInventorySystemCharacter)


#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInventorySystemCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInventorySystemCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventorySystemCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventorySystemCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventorySystemCharacter(AInventorySystemCharacter&&); \
	NO_API AInventorySystemCharacter(const AInventorySystemCharacter&); \
public:


#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventorySystemCharacter(AInventorySystemCharacter&&); \
	NO_API AInventorySystemCharacter(const AInventorySystemCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventorySystemCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventorySystemCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInventorySystemCharacter)


#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_11_PROLOG
#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_SPARSE_DATA \
	FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_RPC_WRAPPERS \
	FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_INCLASS \
	FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_SPARSE_DATA \
	FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class AInventorySystemCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_InventorySystem_Source_InventorySystem_InventorySystemCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
