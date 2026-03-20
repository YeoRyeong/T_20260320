#include "World.h"

class AMonster;
class APlayer;

UWorld::UWorld()
{
	Mosters = new AMonster;
	Players = new APlayer;


}

UWorld::~UWorld()
{
	delete Mosters;
	Mosters = nullptr;

	delete Players;
	Players = nullptr;
}
