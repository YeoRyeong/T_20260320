#include "Player.h"
#include <iostream>

class Gold;

APlayer::APlayer()
{
	this->X = 0;
	this->Y = 0;
}

APlayer::~APlayer()
{
}

void APlayer::IsMove()
{
	std::cout << "X : " << X << "/" << "Y : " << Y << " 움직인다." << std::endl;
}

void APlayer::Attack()
{
}