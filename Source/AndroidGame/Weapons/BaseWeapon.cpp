// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseWeapon.h"

#include "AndroidGame/TP_PickUpComponent.h"
#include "AndroidGame/TP_WeaponComponent.h"

// Sets default values
ABaseWeapon::ABaseWeapon()
{
	PrimaryActorTick.bCanEverTick = true;

	WeaponComponent = CreateDefaultSubobject<UTP_WeaponComponent>(TEXT("WeaponComponent"));
	SetRootComponent(WeaponComponent);

	PickUpComponent = CreateDefaultSubobject<UTP_PickUpComponent>(TEXT("PickupComponent"));
	PickUpComponent->SetupAttachment(WeaponComponent);
	
	RifleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RifleMesh"));
	RifleMesh->SetupAttachment(PickUpComponent);
	

}

// Called when the game starts or when spawned
void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

