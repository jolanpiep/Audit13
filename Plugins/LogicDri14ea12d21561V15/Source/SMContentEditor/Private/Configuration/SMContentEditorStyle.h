// Copyright Recursoft LLC. All Rights Reserved.

#pragma once

#include "Styling/SlateStyle.h"

class FSMContentEditorStyle
{
public:
	// Register with the system.
	static void Initialize();

	// Unregister from the system.
	static void Shutdown();

	/** Gets the singleton instance. */
	static TSharedPtr<ISlateStyle> Get() { return StyleSetInstance; }

	static FName GetStyleSetName() { return TEXT("SMContentEditorStyle"); }

protected:
	static void SetIcons();
private:
	// Singleton instance.
	static TSharedPtr<FSlateStyleSet> StyleSetInstance;
};
