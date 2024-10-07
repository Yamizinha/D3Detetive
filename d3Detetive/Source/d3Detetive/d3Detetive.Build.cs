// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class d3Detetive : ModuleRules
{
	public d3Detetive(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
