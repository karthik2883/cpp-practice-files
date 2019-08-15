#include <iostream>

static int s_Variable = 10;

void function()
{
	s_Variable = 5;
}

int main()
{
	std::cout << s_Variable << std::endl;
	function();
	std::cout << s_Variable << std::endl;
	std::cin.get();
}