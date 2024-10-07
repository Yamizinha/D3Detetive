// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "d3DetetiveHUD.generated.h"

UCLASS()
class Ad3DetetiveHUD : public AHUD
{
	GENERATED_BODY()

public:
	Ad3DetetiveHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

