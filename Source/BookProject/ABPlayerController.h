// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BookProject.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BOOKPROJECT_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void PostInitializeComponents() override;
	virtual void Possess(APawn* aPawn) override;
	
protected:
	virtual void BeginPlay() override;
};
