#include <iostream>

class Entity
{
public:
	float X, Y;
public:
	Entity()
	{
		std::cout << "Created Entity" << std::endl;
		X = 0;
		Y = 0;
	}

	Entity(float x, float y)
	{
		X = x;
		Y = y;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity" << std::endl;
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}
};

void Function()
{
	Entity e;
	e.Print();
}

int main()
{
	Function();
	std::cin.get();
}