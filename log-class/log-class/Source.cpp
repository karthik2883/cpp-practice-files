#include <iostream>

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
private:
	int m_LogLevel = 2;
public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}
	void Error(const char* message)
	{
		std::cout << "[ERROR]:" << message << std::endl;
	}
	void Warn(const char* message)
	{
		std::cout << "[WARNING]:" << message << std::endl;
	}
	void Info(const char* message)
	{
		std::cout << "[INFO]:" << message << std::endl;
	}
};

int main()
{
	Log log;
	log.SetLevel(LogLevelWarning);
	log.Warn("Hello");
	std::cin.get();
}