#include "Monster.h"
#include <iostream>

class Gold;

AMonster::AMonster()
{
	this->X = 0;
	this->Y = 0;

}

AMonster::~AMonster()
{
}

void AMonster::IsMove(int X, int Y)
{
	std::cout << "X : " << X << "/" << "Y : " << Y << " 움직인다." << std::endl;
}

void AMonster::Attack()
{
}
