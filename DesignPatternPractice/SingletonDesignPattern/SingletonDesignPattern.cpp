// SingletonDesignPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class Singleton
{
private:
	Singleton(void) : m_data(0) {}
	int m_data;
public:
	~Singleton(void) {}
	static Singleton* get()
	{
		static Singleton s_singleton;
		return &s_singleton;
	}
	int showData() { return m_data; }
};

int main()
{
	Singleton* instance = Singleton::get();
	std::cout << instance->showData() << std::endl;

	return 0;
}

