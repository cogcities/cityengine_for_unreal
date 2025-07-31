// Fill out your copyright notice in the Description page of Project Settings.


#include "BatchSpawner.h"

#include "InitialShape.h"
#include "VitruvioBatchSubsystem.h"


// Sets default values
ABatchSpawner::ABatchSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABatchSpawner::BeginPlay()
{
	Super::BeginPlay();

	FInitialShapePolygon Polygon;
	Polygon.Vertices = {FVector(1000, -1000, 0), FVector(-1000, -1000, 0), FVector(-1000, 1000, 0), FVector(1000, 1000, 0)};
	FInitialShapeFace InitialShapeFace;
	InitialShapeFace.Indices = {0, 1, 2, 3};
	Polygon.Faces.Add(InitialShapeFace);

	UVitruvioBatchSubsystem* BatchSubsystem = GetWorld()->GetSubsystem<UVitruvioBatchSubsystem>();
			
	for (int X = 0; X < NumTiles; X++)
	{
		for (int Y = 0; Y < NumTiles; Y++)
		{
			FInitialShapeData InitialShapeData;
			InitialShapeData.Position = FVector(X * 4000, Y * 4000, 0);
			InitialShapeData.Attributes.Add("Default$Eave_Ht", "400");
			InitialShapeData.RulePackage = RulePackage;
			InitialShapeData.Polygon = Polygon;
			BatchSubsystem->AddBatchedInitialShape(InitialShapeData);
		}
	}

}

// Called every frame
void ABatchSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

