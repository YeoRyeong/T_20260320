#include<iostream>
#include"Engine.h"
#include"Player.h"
#include"WildBoar.h"
#include"Goblin.h"
#include"Slime.h"

using namespace std; // namespace 클래스보다 큰 개념

int main()
{
	// UEngine* MyEngeie = new UEngine();
	// MyEngeie->Run();
	// delete MyEngeie;

	AWildBoar WildBoar;
	AGoblin Goblin;
	ASlime Slime;

	WildBoar.Move();
	Goblin.Move();
	Slime.Move();

	return 0;
}