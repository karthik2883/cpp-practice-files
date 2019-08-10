#include <iostream>
#include "Log.h"
#include "Log.h" //#pragma once

int main()
{
	InitLog();
	Log("Hello, World");
	std::cin.get();
	return 0;
}