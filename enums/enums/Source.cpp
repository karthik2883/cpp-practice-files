#include <iostream>

#define LOG(x) std::cout << x << std::endl;

enum Example
{
	A, B, C
};

int main()
{
	Example value = A;
	Example b = B; 
	Example c = C;
	LOG(value);
	LOG(b);
	LOG(c);

	if (value == 8) 
	{
		// Do something here
	}

	std::cin.get();
	return 0;
}