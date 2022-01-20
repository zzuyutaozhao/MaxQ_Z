// Copyright 2021 Gamergenic.  See full copyright notice in Spice.h.
// Author: chucknoble@gamergenic.com | https://www.gamergenic.com
// 
// Project page:   https://www.gamergenic.com/project/maxq/
// Documentation:  https://maxq.gamergenic.com/
// GitHub:         https://github.com/Gamergenic1/MaxQ/ 


using UnrealBuildTool;

public class SpiceUncooked : ModuleRules
{
    public SpiceUncooked(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PrivateDependencyModuleNames.AddRange(
            new string[] {
                    "BlueprintGraph",
                    "Core",
                    "CoreUObject",
                    "Engine",
                    "EnhancedInput",
                    "GraphEditor",
                    "InputCore",
                    "KismetCompiler",
                    "PropertyEditor",
                    "Slate",
                    "SlateCore",
                    "UnrealEd"
            });

            PrivateDependencyModuleNames.AddRange(new string[] { "CSpice_Library", "Spice" });
    }
}