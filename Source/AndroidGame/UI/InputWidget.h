// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
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
	class UButton* JumpButton;

	UPROPERTY(meta = (BindWidget))
	UButton* FireButton;

	UPROPERTY(meta = (BindWidget))
	class UTextBlock* KillText;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* DeathText;

	UPROPERTY(meta = (BindWidget))
	class UProgressBar* HealthBar;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* NameText;
	
	void MenuSetup();
protected:
	UFUNCTION()
	void OnJumpButtonClicked();

	UFUNCTION()
	void OnFireButtonClicked();

private:
	UPROPERTY()
	class AShooterPlayerController* ShooterPlayerController;

	UPROPERTY()
	class AAndroidGameCharacter* GameCharacter;
};
