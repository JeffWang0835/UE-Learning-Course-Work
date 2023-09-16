// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "InputWidget.generated.h"

/**
 * 
 */
UCLASS()
class ANDROIDGAME_API UInputWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(meta = (BindWidget))
	UButton* JumpButton;

	UPROPERTY(meta = (BindWidget))
	UButton* FireButton;

	void MenuSetup();
protected:
	UFUNCTION()
	void OnJumpButtonClicked();

	UFUNCTION()
	void OnFireButtonClicked();

private:
	UPROPERTY()
	class AShooterPlayerController* ShooterPlayerController;
};
