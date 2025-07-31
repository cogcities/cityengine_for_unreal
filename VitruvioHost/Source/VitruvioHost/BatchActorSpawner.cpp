// Fill out your copyright notice in the Description page of Project Settings.


#include "BatchActorSpawner.h"

#include "InitialShape.h"
#include "VitruvioActor.h"

// Sets default values
ABatchActorSpawner::ABatchActorSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABatchActorSpawner::BeginPlay()
{
	Super::BeginPlay();

	FInitialShapePolygon Polygon;
	Polygon.Vertices = {FVector(1000, -1000, 0), FVector(-1000, -1000, 0), FVector(-1000, 1000, 0), FVector(1000, 1000, 0)};
	FInitialShapeFace InitialShapeFace;
	InitialShapeFace.Indices = {0, 1, 2, 3};
	Polygon.Faces.Add(InitialShapeFace);
			
	for (int X = 0; X < NumTiles; X++)
	{
		for (int Y = 0; Y < NumTiles; Y++)
		{
			FVector Position = FVector(X * 4000, Y * 4000, 0);
			AVitruvioActor* VitruvioActor = GetWorld()->SpawnActor<AVitruvioActor>(Position, FRotator::ZeroRotator);
			
			VitruvioActor->VitruvioComponent->SetBatchGenerated(true, false);
			VitruvioActor->VitruvioComponent->SetRpk(RulePackage, false, false);
			VitruvioActor->VitruvioComponent->SetRandomSeed(FMath::RandRange(0, 9999), false, false);
			VitruvioActor->VitruvioComponent->SetPolygonInitialShape(Polygon, false, false);
			VitruvioActor->VitruvioComponent->SetFloatAttribute("Default$Eave_Ht", 400, true, true);
		}
	}

}

// Called every frame
void ABatchActorSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

