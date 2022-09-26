// Copyright Epic Games, Inc. All Rights Reserved.

//using UnrealBuildTool;
namespace UnrealBuildTool.Rules
{
public class RayStreamingForUE : ModuleRules
{
	public RayStreamingForUE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		MinFilesUsingPrecompiledHeaderOverride = 1;
		bUseUnity = false;
		bEnableExceptions = true;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				
				// ... add other public dependencies that you statically link with here ...
				"Json","JsonUtilities",
				"WebSockets",
				"InputDevice",
				"Engine"
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Slate",
				"SlateCore",
				"Engine",
				
				// ... add private dependencies that you statically link with here ...	
				"InputCore",
				"ApplicationCore",
				"InputDevice",
				"DeveloperSettings"
				
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
        if (Target.Type == TargetType.Editor)
        {
            PrivateDependencyModuleNames.Add("EditorFramework");
            PrivateDependencyModuleNames.Add("UnrealEd");
            PrivateDependencyModuleNames.Add("GameProjectGeneration");
        }
    }
}
}
