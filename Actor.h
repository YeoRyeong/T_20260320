#pragma once

class AActor
{
public:
	AActor();
	~AActor();


private: // 변수는 다 private
	int X;
	int Y;

public:
	int GetX();
	//void SetX(int InX);
	int GetY();
	void SetY(int InY);

	void Move();
};

