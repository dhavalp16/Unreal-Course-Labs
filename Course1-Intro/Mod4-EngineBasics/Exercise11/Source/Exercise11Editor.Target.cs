// Copyright Bitr8. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Exercise11EditorTarget : TargetRules
{
	public Exercise11EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V6;

		ExtraModuleNames.AddRange( new string[] { "Exercise11" } );
	}
}
