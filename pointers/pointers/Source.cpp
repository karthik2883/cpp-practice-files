#include <iostream>

#define LOG(x) std::cout << x << std::endl

//Pointers are integers that hold address. 
//They don't have any "type". 
//We mention the "type" of pointer only to specify what type of data the pointer presumably points to.


int main()
{
	int var = 8;
	void* ptr = 0; //Invalid memory address
	ptr = &var;
	LOG(var);
	LOG(&var);
	LOG(ptr);
	
	char* buffer = new char[10];
	memset(buffer, 0, 10);


	return 0;
}