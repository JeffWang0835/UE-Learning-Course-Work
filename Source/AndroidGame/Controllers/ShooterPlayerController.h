// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ShooterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ANDROIDGAME_API AShooterPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere,Category = "UI")
	TSubclassOf<UUserWidget> InputWidgetClass;

private:
	UPROPERTY()
	class UInputWidget* InputWidget;
};
