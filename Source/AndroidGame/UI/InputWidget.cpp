// Fill out your copyright notice in the Description page of Project Settings.


#include "InputWidget.h"

#include "AndroidGame/AndroidGameCharacter.h"
#include "AndroidGame/Controllers/ShooterPlayerController.h"

void UInputWidget::MenuSetup()
{
	/*
	AddToViewport(-1);
	SetVisibility(ESlateVisibility::Visible);

	ShooterPlayerController = ShooterPlayerController == nullptr ?
		Cast<AShooterPlayerController>(GetWorld()->GetFirstPlayerController()) : ShooterPlayerController;
	if(JumpButton && !JumpButton->OnClicked.IsBound())
	{
		JumpButton->OnClicked.AddDynamic(this,&UInputWidget::OnJumpButtonClicked);
	}
	if(FireButton && !FireButton->OnClicked.IsBound())
	{
		FireButton->OnClicked.AddDynamic(this,&UInputWidget::OnFireButtonClicked);
	}*/
	
}

void UInputWidget::OnJumpButtonClicked()
{
	ShooterPlayerController = ShooterPlayerController == nullptr ?
		Cast<AShooterPlayerController>(GetWorld()->GetFirstPlayerController()) : ShooterPlayerController;

	if(ShooterPlayerController)
	{
		AAndroidGameCharacter* GameCharacter = Cast<AAndroidGameCharacter>(ShooterPlayerController->GetCharacter());
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
		AAndroidGameCharacter* GameCharacter = Cast<AAndroidGameCharacter>(ShooterPlayerController->GetCharacter());
		if(GameCharacter)
		{
			GameCharacter->Jump();
		}
	}
}
