// Fill out your copyright notice in the Description page of Project Settings.

#include "Prova.h"
#include "Genius.h"
#include "PaperSpriteComponent.h"
#include "PaperSprite.h"
#include "GeniusPawn.h"


// Sets default values
AGenius::AGenius()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Sprite"));
	Sprite->SetSprite(SpritePisca);

	Sprite->OnInputTouchBegin.AddDynamic(this, &AGenius::OnTouchBegin);
	RootComponent = Sprite;
}

// Called when the game starts or when spawned
void AGenius::BeginPlay()
{
	Super::BeginPlay();
	

	TimerManager();
	TimerManagers();

	
}

// Called every frame
void AGenius::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}


void AGenius::TimerManager() {

	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this,
		&AGenius::TimerManager, 1.0f, true);
	CountdownTime -= 1.0f; //<- problema do contador aqui

	int Random;
	Random = FMath::RandRange(1, 4);
	UWorld *World = GetWorld();

	if (CountdownTime <= -4.005f && World != nullptr) {
		GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		UE_LOG(LogTemp, Warning, TEXT("Time Outttt"));
		//Destroy();




		if (Random == 1) {
			Sprite->SetSprite(SpritePisca);
			UE_LOG(LogTemp, Warning, TEXT("Random 1 ok!"));


		}
		 if (Random == 2) {
			Sprite->SetSprite(SpritePisca);
			UE_LOG(LogTemp, Warning, TEXT("Random 2 ok!"));

		}
		 if (Random == 3) {
			Sprite->SetSprite(SpritePisca);
			UE_LOG(LogTemp, Warning, TEXT("Random 3 ok!"));


		}
		 if (Random == 4) {
			Sprite->SetSprite(SpritePisca);
			UE_LOG(LogTemp, Warning, TEXT("Random 4 ok!"));


		}

	}

	}



void AGenius::TimerManagers() {

	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this,
		&AGenius::TimerManager, 1.0f, true);
	CountdownTime -= 1.0f; //<- problema do contador aqui

	
	UWorld *World = GetWorld();

	if (CountdownTime <= -6.005f && World != nullptr) {
		GetWorldTimerManager().ClearTimer(CountdownTimerHandle);
		UE_LOG(LogTemp, Warning, TEXT("Time Out2"));
		//Destroy();

		Sprite->SetSprite(SpritePisca);


		if (!bTurned) {
			Sprite->SetSprite(SpritePisca);
			UE_LOG(LogTemp, Warning, TEXT("Random 1 ok!"));


		}
		if (!bTurned) {
			Sprite->SetSprite(SpritePisca);
			UE_LOG(LogTemp, Warning, TEXT("Random 2 ok!"));

		}
		if (!bTurned) {
			Sprite->SetSprite(SpritePisca);
			UE_LOG(LogTemp, Warning, TEXT("Random 3 ok!"));


		}
		if (!bTurned) {
			Sprite->SetSprite(SpritePisca);
			UE_LOG(LogTemp, Warning, TEXT("Random 4 ok!"));


		}

	}

}

int AGenius::GetIndex() {
	return Index;
}

void AGenius::OnTouchBegin(ETouchIndex::Type type, UPrimitiveComponent* TouchedComponent) {

	
	UE_LOG(LogTemp, Warning, TEXT("Touch ok!"));

	UWorld* World = GetWorld();
	if (World != nullptr) {

		AGeniusPawn* Pawn = Cast<AGeniusPawn>(UGameplayStatics::GetPlayerController(World, 0)->GetControlledPawn());

	}

	
}

void AGenius::Pisca()
{

	int Random;
	Random = FMath::RandRange(1, 4);
	UWorld *World = GetWorld();


	if (World != nullptr) {



		if (Random == 1) {
			Sprite->SetSprite(SpritePisca);
			UE_LOG(LogTemp, Warning, TEXT("Random 1 ok!"));


		}
		else if (Random == 2) {
			Sprite->SetSprite(SpritePisca);
			UE_LOG(LogTemp, Warning, TEXT("Random 2 ok!"));

		}
		else if (Random == 3) {
			Sprite->SetSprite(SpritePisca);
			UE_LOG(LogTemp, Warning, TEXT("Random 3 ok!"));


		}
		else if (Random == 4) {
			Sprite->SetSprite(SpritePisca);
			UE_LOG(LogTemp, Warning, TEXT("Random 4 ok!"));


		}

	}




}
