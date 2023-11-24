// Fill out your copyright notice in the Description page of Project Settings.


#include "InputWidget.h"
#include "AndroidGame/AndroidGameCharacter.h"
#include "AndroidGame/Controllers/ShooterPlayerController.h"
#include "AndroidGame/PlayerState/CharacterPlayerState.h"
#include "Components/Button.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"

void UInputWidget::MenuSetup()
{
	
	AddToViewport();

	//初始化Controller
	ShooterPlayerController = ShooterPlayerController == nullptr ?
		Cast<AShooterPlayerController>(GetWorld()->GetFirstPlayerController()) : ShooterPlayerController;

	//初始化Character
	if(ShooterPlayerController)
	{
		GameCharacter = Cast<AAndroidGameCharacter>(ShooterPlayerController->GetCharacter());
	}
	
	
	if(JumpButton && !JumpButton->OnClicked.IsBound())
	{
		JumpButton->OnClicked.AddDynamic(this,&UInputWidget::OnJumpButtonClicked);
	}
	if(FireButton && !FireButton->OnClicked.IsBound())
	{
		FireButton->OnClicked.AddDynamic(this,&UInputWidget::OnFireButtonClicked);
	}

	if(ShooterPlayerController && KillText && DeathText)
	{
		ACharacterPlayerState* PlayerState = ShooterPlayerController->GetPlayerState<ACharacterPlayerState>();
		if(PlayerState)
		{
			FString KillNumberString = FString::Printf(TEXT("击杀: %d"),PlayerState->GetKillNumber());
			KillText->SetText(FText::FromString(KillNumberString));

			FString DeathNumberString = FString::Printf(TEXT("死亡: %d"),PlayerState->GetDeathNumber());
			DeathText->SetText(FText::FromString(DeathNumberString));

			NameText->SetText(FText::FromString(PlayerState->GetNameOfPlayer()));
		}
	}

	if(GameCharacter)
	{
		float Percent = GameCharacter->GetHealth() / GameCharacter->GetMaxHealth();
		HealthBar->SetPercent(Percent);
	}
	
}

void UInputWidget::OnJumpButtonClicked()
{
	ShooterPlayerController = ShooterPlayerController == nullptr ?
		Cast<AShooterPlayerController>(GetWorld()->GetFirstPlayerController()) : ShooterPlayerController;

	if(ShooterPlayerController)
	{
		GameCharacter = GameCharacter == nullptr ? Cast<AAndroidGameCharacter>(ShooterPlayerController->GetCharacter()) : GameCharacter;
		if(GameCharacter)
		{
			GameCharacter->Jump();
		}
	}
}

void UInputWidget::OnFireButtonClicked()
{
	ShooterPlayerController = ShooterPlayerController == nullptr ?
	Cast<AShooterPlayerController>(GetWorld()->GetFirstPlayerController()) : ShooterPlayerController;

	if(ShooterPlayerController)
	{
		GameCharacter = GameCharacter == nullptr ? Cast<AAndroidGameCharacter>(ShooterPlayerController->GetCharacter()) : GameCharacter;
		if(GameCharacter)
		{
			GameCharacter->Fire();
		}
	}
}
