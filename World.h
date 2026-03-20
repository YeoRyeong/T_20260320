#pragma once

class APlayer;
class AGoblin;
class ASlime;
class AWildBoar;

class UWorld
{
public:
	UWorld();
	~UWorld();

	APlayer* Player;

	ASlime* Slimes;
	AGoblin* Goblins;
	AWildBoar* WildBoars;

	int PlayerCount = 0;
	int GoblinCount = 0;
	int SlimeCount = 0;
	int WildBoarCount = 0;
}; 

