// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class TEACHINGTEMPLATE_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	UPROPERTY(EditAnywhere, Category = "Gamedesign")
	FString ActorName;

	UPROPERTY(EditAnywhere, Category = "Gamedesign")
	int Count;

	UPROPERTY(EditAnywhere, Category = "Gamedesign")
	float Percantage;

	UFUNCTION(BlueprintCallable, Category = "Beispielfunktion")
	int Add(int& a, int& b, int a1, int b1);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
