#include "Function.h"
#include<iostream>

Function::Function(double _x, double _a, double _b)
{
	x = _x;
	y = 0;

	if (_a == 0)
		a = 1;
	else
		a = _a;

	if (_b == 0)
		b = 1;
	else
		b = _b;
}

double Function::getX()
{
	return x;
}

double Function::getY()
{
	if (y == 0)
		f();
	return y;
}

double Function::getA()
{
	return a;
}

double Function::getB()
{
	return b;
}

void Function::setX(double _x)
{
	x = _x;
}

void Function::setA(double _a)
{
	if (_a == 0)
		a = 1;
	else
		a = _a;
}

void Function::setB(double _b)
{
	if (_b == 0)
		b = 1;
	else
		b = _b;
}
