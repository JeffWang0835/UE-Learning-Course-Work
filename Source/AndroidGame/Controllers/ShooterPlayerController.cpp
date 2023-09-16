// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterPlayerController.h"

#include "AndroidGame/UI/InputWidget.h"
#include "Blueprint/UserWidget.h"

void AShooterPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if(InputWidgetClass)
	{
		InputWidget = CreateWidget<UInputWidget>(this,InputWidgetClass);
		if(InputWidget)
		{
			InputWidget->MenuSetup();
		}
	}
	
}
