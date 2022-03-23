// Fill out your copyright notice in the Description page of Project Settings.


#include "ToonTanksPlayerController.h"
#include "GameFramework/Pawn.h"

void AToonTanksPlayerController::SetPlayerEnabledState(bool bPlayerEnabled)
{
    UE_LOG(LogTemp,Warning,TEXT("ESTOY EN EL TOON PLAYER CONTROLER"));
    if(bPlayerEnabled){
        UE_LOG(LogTemp,Warning,TEXT("ENTRÉ AL IF"));
        GetPawn()->EnableInput(this);
    }else{
        UE_LOG(LogTemp,Warning,TEXT("NO ENTRÉ AL IF"));
        GetPawn()->DisableInput(this);
    }
    bShowMouseCursor = bPlayerEnabled;
}