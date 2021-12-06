#pragma once
#include"Function.h"

class Ellipse:public Function
{
public:

	Ellipse(double _x = 0, double _a = 1, double _b = 1);

	std::string toString();

	double f();

	friend std::ostream& operator<<(std::ostream& out, Ellipse& obj);
	friend std::istream& operator>>(std::istream& in, Ellipse& obj);
};
