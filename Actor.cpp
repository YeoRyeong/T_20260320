#include "Actor.h"
#include<iostream>

AActor::AActor()
	:X(0), Y(0)
{
}

AActor::~AActor()
{
}

int AActor::GetX()
{
	return X;
}

int AActor::GetY()
{
	return Y;
}

void AActor::SetY(int InY)
{
	if (InY < 0)
	{
		return;
	}
	Y = InY;
}

