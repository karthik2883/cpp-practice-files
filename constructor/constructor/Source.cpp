#include <iostream>

class Entity
{
public:
	float X, Y;
public:
	Entity()
	{
		X = 0;
		Y = 0;
	}
	Entity(float x, float y)
	{
		X = x;
		Y = y;
	}
	/*void Init()
	{
		X = 0;
		Y = 0;
	}*/
	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

class Log
{
public:
	Log()
	{

	}
	static void Write()
	{

	}
};

int main()
{
	Log::Write();
	Log l;
	Entity e(10.0, 15.0);
	//e.Init();
	e.Print();
	std::cin.get();
}