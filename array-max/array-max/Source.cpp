#include <iostream>

int main()
{
	int a[10];

	std::cout << "Enter 10 numbers: " << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cin >> a[i];
	}

	std::cout << "The 10 numbers are: " << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << a[i] << " ";
	}

	int max = a[0];

	for (int i = 1; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}

	std::cout << std::endl;

	std::cout << "The maximum number is " << max << std::endl;

	std::cin.get();
	return 0;
}