#pragma once
#include "Actor.h"

class APlayer: public AActor
{
public:
	APlayer();
	~APlayer();

	int Gold;

	void IsMove(int Key, int X, int Y);
	void Attack();
};

