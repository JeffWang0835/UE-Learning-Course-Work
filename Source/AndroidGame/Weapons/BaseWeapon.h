// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class ANDROIDGAME_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	ABaseWeapon();
	
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere,Category = Mesh)
	class USkeletalMeshComponent* RifleMesh;

	UPROPERTY(VisibleAnywhere)
	class UTP_PickUpComponent* PickUpComponent;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
	class UTP_WeaponComponent* WeaponComponent;
private:
	
	
	
public:	
	UTP_WeaponComponent* GetWeaponComponent() const {return WeaponComponent;}

};
