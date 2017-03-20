// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Genius.generated.h"

UCLASS()
class PROVA_API AGenius : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGenius();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;


	
	void TimerManager();

	void TimerManagers();

	int GetIndex();

private:

	UPROPERTY(EditAnywhere)
		class UPaperSprite* OpenedSprite;


	UPROPERTY(EditAnywhere)
	class UPaperSpriteComponent* Sprite;


	UPROPERTY(EditAnywhere)
		class UPaperSprite* SpritePisca;

	UPROPERTY(EditAnywhere)
		int Index;

	UPROPERTY(EditAnywhere)
		bool bTurned;

	UFUNCTION()
		void OnTouchBegin(ETouchIndex::Type type, UPrimitiveComponent* TouchedComponent);

	UFUNCTION()
	void Pisca();

	FTimerHandle CountdownTimerHandle;

	float CountdownTime;



};
