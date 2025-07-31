// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RulePackage.h"
#include "GameFramework/Actor.h"
#include "BatchActorSpawner.generated.h"

UCLASS()
class VITRUVIOHOST_API ABatchActorSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	ABatchActorSpawner();

protected:
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditAnywhere)
	URulePackage* RulePackage;

	UPROPERTY(EditAnywhere)
	int NumTiles = 20;
	
	virtual void Tick(float DeltaTime) override;

};
