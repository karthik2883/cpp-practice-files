#include <iostream>

void Function()
{
	static int i = 0;		//Not visible in global scope
	i++;
	std::cout << i << std::endl;
}


int main()
{
	Function();
	Function();
	Function();
	Function();
	Function();
	std::cin.get();
}