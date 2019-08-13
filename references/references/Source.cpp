#include <iostream>

#define LOG(x) std::cout << x << std::endl;

void Increment(int* value)
{
	(*value)++; //First dereference, then increment
}

void Increment(int& value)
{
	value++;
}

int main()
{
	int a = 5;
	int* b = &a; //& is address of 
	int& ref = a; //Here '&' is part of the type. It is a reference

	LOG(ref);
	LOG(a);

	a = 7; //Changing a, both change

	LOG(ref);
	LOG(a);

	ref = 9; // Changing ref, both change

	LOG(ref);
	LOG(a);

	//Both have the same address.

	LOG("Address of a: ");
	LOG(&a);

	LOG("Address of the ref: ");
	LOG(&ref);

	std::cin.get();
	return 0;
}  