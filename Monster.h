#pragma once

#include"Actor.h"
#include<string>

class AMonster : public AActor
{
public:
	AMonster();
	~AMonster();

	int Gold;

	void IsMove(int Key, int X, int Y);
	void Attack();
};

