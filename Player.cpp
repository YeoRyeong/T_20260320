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

void APlayer::IsMove(int Key, int X, int Y)
{
	if (Key == 1) {
		this->X = 1;
		std::cout << "¾ÕÀ¸·Î ÇÑÄ­" << std::endl;
	}

	if (Key == 2) {
		this->X = -1;
		std::cout << "µÚ·Î ÇÑÄ­" << std::endl;
	}

	if (Key == 3) {
		this->Y = -1;
		std::cout << "¿ÞÂÊÀ¸·Î ÇÑÄ­" << std::endl;
	}

	if (Key == 4) {
		this->Y = 1;
		std::cout << "¿À¸¥ÂÊÀ¸·Î ÇÑÄ­" << std::endl;
	}
}

void APlayer::Attack()
{
}