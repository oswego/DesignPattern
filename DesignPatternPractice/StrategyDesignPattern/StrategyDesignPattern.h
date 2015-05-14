#pragma once

class IStrategy
{
public:
	virtual void output() = 0;
};

class StrategyOne : public IStrategy
{
public:
	void output() override;
};

class StrategyTwo : public IStrategy
{
public:
	void output() override;
};

class Context
{
public:
	Context(IStrategy* strategy);
	~Context();
	void output();

private:
	IStrategy* m_strategy;
};