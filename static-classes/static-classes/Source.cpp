//Static variables inside classes means only one instance of that variable will be created across all classes

#include <iostream>

struct Entity
{
	static int x, y;

	void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

int Entity::x;
int Entity::y;

int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;

	Entity e1;
	e1.x = 5;
	e1.y = 8;

	e.Print();
	e1.Print();
	std::cin.get();
}