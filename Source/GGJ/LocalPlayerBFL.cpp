// Fill out your copyright notice in the Description page of Project Settings.


#include "LocalPlayerBFL.h"
#include "Engine/GameInstance.h"

ULocalPlayer* ULocalPlayerBFL::FindLocalPlayerFromControllerId(const UObject* WorldContextObject, const int32 ControllerId)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		if (UGameInstance* GameInstance = World->GetGameInstance())
		{
			return GameInstance->FindLocalPlayerFromControllerId(ControllerId);
		}
	}

	return nullptr;
}
