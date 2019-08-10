#ifndef _LOG_H
#define _LOG_H

#include <iostream>

void Log(const char* message)
{
	std::cout << message << std::endl;
}

void InitLog()
{
	Log("Initializing Log");
}

#endif