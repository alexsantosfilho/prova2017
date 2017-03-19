// Fill out your copyright notice in the Description page of Project Settings.

#include "Prova.h"
#include "ProvaGameMode.h"
#include "MyPlayerController.h"

AProvaGameMode::AProvaGameMode() {

	PlayerControllerClass = AMyPlayerController::StaticClass();

}


