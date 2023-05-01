// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Grave_Robber : ModuleRules
{
	public Grave_Robber(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara", "UMG" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
    }
}
