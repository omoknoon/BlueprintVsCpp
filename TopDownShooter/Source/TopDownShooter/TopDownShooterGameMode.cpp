// Copyright Epic Games, Inc. All Rights Reserved.

#include "TopDownShooterGameMode.h"
#include "TopDownShooterPawn.h"

ATopDownShooterGameMode::ATopDownShooterGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ATopDownShooterPawn::StaticClass();
}

