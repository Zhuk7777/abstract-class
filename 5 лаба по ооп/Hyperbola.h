#pragma once
#include"Function.h"

class Hyperbola :public Function
{
public:

	Hyperbola(double _x = 0, double _a = 1, double _b = 1);

	std::string toString();

	double  f();

	friend std::ostream& operator<<(std::ostream& out, Hyperbola& obj);
	friend std::istream& operator>>(std::istream& in, Hyperbola& obj);
};
