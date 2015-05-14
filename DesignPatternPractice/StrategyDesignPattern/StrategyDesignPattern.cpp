// StrategyDesignPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StrategyDesignPattern.h"
#include <iostream>
using namespace std;

void StrategyOne::output()
{
	cout << "Output from StrategyOne" << endl;
}

void StrategyTwo::output()
{
	cout << "Output from StrategyTwo" << endl;
}

Context::Context(IStrategy* strategy) : m_strategy(strategy)
{
}

Context::~Context()
{
	if (m_strategy)
		delete m_strategy;
}

void Context::output()
{
	m_strategy->output();
}

int _tmain(int argc, _TCHAR* argv[])
{
	StrategyOne sOne;
	Context* ctx = new Context(&sOne);
	ctx->output();

	StrategyTwo sTwo;
	ctx = new Context(&sTwo);
	ctx->output();

	return 0;
}

