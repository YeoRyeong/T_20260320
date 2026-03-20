#pragma once

class UWorld; // 자료형이니까 나중에 찾아서 쓰라는 형식 

class UEngine
{
public:
	UEngine();
	~UEngine();

	void Init(); // Initialize
	void Run();
	void Term(); // Terminate

	void Input();
	void Tick();
	void Render();

	UWorld* World;

private:
	bool bIsRunning;
};

