// FactoryMethodDesignPattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FactoryMethodDesignPattern.h"
#include <iostream>
using namespace std;
using namespace Demo;

void Shape::draw()
{
}

void Circle::draw()
{
	cout << "Circle is drawn" << endl;
}

void Rectangle::draw()
{
	cout << "Rectangle is drawn" << endl;
}

void Triangle::draw()
{
	cout << "Triangle is drawn" << endl;
}

Shape* ShapeFactory::getShape(const std::string& shapeType)
{
	if (shapeType == "circle")
	{
		return new Circle();
	}
	else if (shapeType == "rectangle")
	{
		return new Rectangle();
	}
	else if (shapeType == "triangle")
	{
		return new Triangle();
	}
	else
	{
		return nullptr;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	Shape* shape = nullptr;
	ShapeFactory* shapeFactory = new ShapeFactory();
	shape = shapeFactory->getShape("circle");
	shape->draw();

	shape = shapeFactory->getShape("rectangle");
	shape->draw();

	shape = shapeFactory->getShape("triangle");
	shape->draw();

	return 0;
}

