// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "CharacterPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ANDROIDGAME_API ACharacterPlayerState : public APlayerState
{
	GENERATED_BODY()

public:

protected:
	
private:
	UPROPERTY()
	int killNumber = 0;

	UPROPERTY()
	int deathNumber = 0;

	UPROPERTY(EditAnywhere)
	FString PlayerName = "NoName";

public:
	int GetKillNumber() const {return killNumber;}
	int GetDeathNumber() const {return deathNumber;}
	FString GetNameOfPlayer() const {return PlayerName;}
};
