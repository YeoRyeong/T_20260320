#include<iostream>
#include"Engine.h"

using namespace std; // namespace 클래스보다 큰 개념

int main()
{
	UEngine* MyEngeie = new UEngine();
	MyEngeie->Run();
	delete MyEngeie;


	return 0;
}