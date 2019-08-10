#include <iostream>
#include "Log.h"

//There are three control flow statement: continue, break, return:
//The continue statement can be used only inside a loop, goes to next iteration of the loop
//The break statement ends the loop
//The return statement "returns" or exits from the funtion. Don't forget to supply it with a value if the function returns a value

int main()
{
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			continue;
		Log("Hello, World");
		std::cout << i << std::endl;
		//continue; //This will not affect the behaviour of this loop since it is the last line of the loop anyway.
	}

	for (int i = 0; i < 5; i++)
	{
		if ((i+1) % 2 == 0)
			break;
		Log("This should be printed only once");
		std::cout << i << std::endl;
	}

	return 0; //When we reach this point, the function should exit with code 0
}