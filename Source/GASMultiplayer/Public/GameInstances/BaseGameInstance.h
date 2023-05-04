﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BaseGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class GASMULTIPLAYER_API UBaseGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

#pragma region OVERRIDES

	/** Virtual function to allow custom GameInstances an opportunity to set up what it needs */
	virtual void Init() override;

#pragma endregion OVERRIDES
	
};
