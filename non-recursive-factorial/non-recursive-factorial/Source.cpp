#include <iostream>

int main() 
{
	int input;

	std::cout << "Enter a number: " << std::endl;
	std::cin >> input;

	int fact = 1;

	for (int i = 1; i <= input; i++) 
	{
		fact = fact * i;
	}

	std::cout << "The factorial of the number is: " << fact << std::endl;

	std::cin.get();
	return 0;
}