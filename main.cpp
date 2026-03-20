#include<iostream>
#include"Engine.h"
#include"Player.h"
#include"WildBoar.h"
#include"Goblin.h"
#include"Slime.h"

using namespace std; // namespace 클래스보다 큰 개념

int main()
{
	AWildBoar WildBoar[10];
	AGoblin Goblin[10];
	ASlime Slime[10];

	
	WildBoar[0].Move();
	Goblin[0].Move();
	Slime[0].Move();

	return 0;
}