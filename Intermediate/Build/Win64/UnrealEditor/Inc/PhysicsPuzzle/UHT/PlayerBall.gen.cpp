// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsPuzzle/Public/PlayerBall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBall() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APlayerBall();
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APlayerBall_NoRegister();
UPackage* Z_Construct_UPackage__Script_PhysicsPuzzle();
// End Cross Module References

// Begin Class APlayerBall
void APlayerBall::StaticRegisterNativesAPlayerBall()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerBall);
UClass* Z_Construct_UClass_APlayerBall_NoRegister()
{
	return APlayerBall::StaticClass();
}
struct Z_Construct_UClass_APlayerBall_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerBall.h" },
		{ "ModuleRelativePath", "Public/PlayerBall.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerBall>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APlayerBall_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsPuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBall_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerBall_Statics::ClassParams = {
	&APlayerBall::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerBall_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerBall_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerBall()
{
	if (!Z_Registration_Info_UClass_APlayerBall.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerBall.OuterSingleton, Z_Construct_UClass_APlayerBall_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerBall.OuterSingleton;
}
template<> PHYSICSPUZZLE_API UClass* StaticClass<APlayerBall>()
{
	return APlayerBall::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerBall);
APlayerBall::~APlayerBall() {}
// End Class APlayerBall

// Begin Registration
struct Z_CompiledInDeferFile_FID_UEProject_PhysicsPuzzle_Source_PhysicsPuzzle_Public_PlayerBall_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerBall, APlayerBall::StaticClass, TEXT("APlayerBall"), &Z_Registration_Info_UClass_APlayerBall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerBall), 337311526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProject_PhysicsPuzzle_Source_PhysicsPuzzle_Public_PlayerBall_h_1266415498(TEXT("/Script/PhysicsPuzzle"),
	Z_CompiledInDeferFile_FID_UEProject_PhysicsPuzzle_Source_PhysicsPuzzle_Public_PlayerBall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProject_PhysicsPuzzle_Source_PhysicsPuzzle_Public_PlayerBall_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
