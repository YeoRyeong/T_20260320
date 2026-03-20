#pragma once
#include "Monster.h"
#include "Player.h"

class UWorld
{
public:
	UWorld();
	~UWorld();

	AMonster* Mosters;
	APlayer* Players;
};

