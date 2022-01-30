// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LocalPlayerBFL.generated.h"

/**
 * 
 */
UCLASS()
class GGJ_API ULocalPlayerBFL : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "LocalPlayer", meta=(WorldContext="WorldContextObject"))
	static ULocalPlayer* FindLocalPlayerFromControllerId(const UObject* WorldContextObject, const int32 ControllerId);
};
