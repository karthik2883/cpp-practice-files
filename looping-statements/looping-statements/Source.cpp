#include <iostream>
#include "Log.h"

int main()
{
	for (int i = 0; i < 10; i++)
	{
		Log("Hello World");
	}

	std::cout << "While Loop" << std::endl;

	int i = 0;
	while (i < 10)
	{
		Log("Hello While");
		i++;
	}

	i = 0;
	do
	{
		Log("This has to be printed once");
	} while (i != 0);
	std::cin.get();
}