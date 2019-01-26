// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PersonalSpaceInvaderGameMode.h"
#include "PersonalSpaceInvaderCharacter.h"

APersonalSpaceInvaderGameMode::APersonalSpaceInvaderGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = APersonalSpaceInvaderCharacter::StaticClass();	
}
