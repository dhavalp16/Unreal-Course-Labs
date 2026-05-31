// Copyright Bitr8. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Exercise11Target : TargetRules
{
	public Exercise11Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V6;

		ExtraModuleNames.AddRange( new string[] { "Exercise11" } );
	}
}
