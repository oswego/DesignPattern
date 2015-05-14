#pragma once

#include <string>

namespace Demo {

class Shape
{
public:
	virtual void draw();
};

class Circle : public Shape
{
public:
	void draw() override;
};

class Rectangle : public Shape
{
public:
	void draw() override;
};

class Triangle : public Shape
{
public:
	void draw() override;
};

class ShapeFactory
{
public:
	Shape* getShape(const std::string& shapeType);
};

}