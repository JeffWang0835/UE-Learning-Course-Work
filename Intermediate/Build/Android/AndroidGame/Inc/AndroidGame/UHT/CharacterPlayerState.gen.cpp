// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidGame/PlayerState/CharacterPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterPlayerState() {}
// Cross Module References
	ANDROIDGAME_API UClass* Z_Construct_UClass_ACharacterPlayerState();
	ANDROIDGAME_API UClass* Z_Construct_UClass_ACharacterPlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	UPackage* Z_Construct_UPackage__Script_AndroidGame();
// End Cross Module References
	void ACharacterPlayerState::StaticRegisterNativesACharacterPlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterPlayerState);
	UClass* Z_Construct_UClass_ACharacterPlayerState_NoRegister()
	{
		return ACharacterPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_killNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_killNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deathNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_deathNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlayerState/CharacterPlayerState.h" },
		{ "ModuleRelativePath", "PlayerState/CharacterPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_killNumber_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/CharacterPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_killNumber = { "killNumber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterPlayerState, killNumber), METADATA_PARAMS(Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_killNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_killNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_deathNumber_MetaData[] = {
		{ "ModuleRelativePath", "PlayerState/CharacterPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_deathNumber = { "deathNumber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterPlayerState, deathNumber), METADATA_PARAMS(Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_deathNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_deathNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "CharacterPlayerState" },
		{ "ModuleRelativePath", "PlayerState/CharacterPlayerState.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACharacterPlayerState, PlayerName), METADATA_PARAMS(Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_PlayerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterPlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_killNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_deathNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterPlayerState_Statics::NewProp_PlayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterPlayerState_Statics::ClassParams = {
		&ACharacterPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACharacterPlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterPlayerState()
	{
		if (!Z_Registration_Info_UClass_ACharacterPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterPlayerState.OuterSingleton, Z_Construct_UClass_ACharacterPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterPlayerState.OuterSingleton;
	}
	template<> ANDROIDGAME_API UClass* StaticClass<ACharacterPlayerState>()
	{
		return ACharacterPlayerState::StaticClass();
	}
	ACharacterPlayerState::ACharacterPlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterPlayerState);
	ACharacterPlayerState::~ACharacterPlayerState() {}
	struct Z_CompiledInDeferFile_FID_project_AndroidGame_Source_AndroidGame_PlayerState_CharacterPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project_AndroidGame_Source_AndroidGame_PlayerState_CharacterPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterPlayerState, ACharacterPlayerState::StaticClass, TEXT("ACharacterPlayerState"), &Z_Registration_Info_UClass_ACharacterPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterPlayerState), 1288252457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_project_AndroidGame_Source_AndroidGame_PlayerState_CharacterPlayerState_h_818907159(TEXT("/Script/AndroidGame"),
		Z_CompiledInDeferFile_FID_project_AndroidGame_Source_AndroidGame_PlayerState_CharacterPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_project_AndroidGame_Source_AndroidGame_PlayerState_CharacterPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
