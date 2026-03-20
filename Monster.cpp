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

void AMonster::IsMove(int Key, int X, int Y)
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
	//std::cout << "X : " << X << "\t" << "Y : " << Y << " ¿òÁ÷ÀÎ´Ù." << std::endl;
}

void AMonster::Attack()
{
}
