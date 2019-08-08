#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void Multiply_and_Log(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result;
}

int main()
{
	int result = Multiply(3, 4);
	std::cout << result << std::endl;

	Multiply_and_Log(9, 12);

	std::cin.get();
	return 0;
}