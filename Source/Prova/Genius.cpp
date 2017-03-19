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
	Sprite->OnInputTouchBegin.AddDynamic(this, &AGenius::OnTouchBegin);
	RootComponent = Sprite;
}

// Called when the game starts or when spawned
void AGenius::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGenius::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}



void AGenius::OnTouchBegin(ETouchIndex::Type type, UPrimitiveComponent* TouchedComponent) {


	UE_LOG(LogTemp, Warning, TEXT("Touch ok!"));


	UWorld* World = GetWorld();

	if (World != nullptr) {

		AGeniusPawn* Pawn = Cast<AGeniusPawn>(UGameplayStatics::GetPlayerController(World, 0)->GetControlledPawn());

	}
}