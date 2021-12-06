#include "Ellipse.h"
#include<iostream>

Ellipse::Ellipse(double _x, double _a, double _b):Function(_x,_a,_b)
{}

double Ellipse::f()
{
	y = sqrt((1 - pow(x, 2) / pow(a, 2)) * pow(b, 2));
	return y;
}

std::ostream& operator<<(std::ostream& out, Ellipse& obj)
{
	obj.f();
	if (1-pow(obj.x, 2) / pow(obj.a, 2) < 0)
		out << "у неопределен\n";
	else
		if (!obj.y)
			out << "x=" << obj.x << " y=" << obj.y << " a=" << obj.a << " b=" << obj.b << "\n";
		else
			out << "x=" << obj.x << "\ny=" << obj.y << " или y=-" << obj.y << "\na=" << obj.a << "\nb=" << obj.b << "\n";
	return out;
}

std::istream& operator>>(std::istream& in, Ellipse& obj)
{
	in >> obj.x;
	in >> obj.a;
	if (!obj.a)
		obj.a = 1;
	in >> obj.b;
	if (!obj.b)
		obj.b = 1;
	return in;

}
std::string Ellipse::toString()
{
	f();
	if (1 - pow(x, 2) / pow(a, 2) < 0)
		return "у неопределен\n";
	else
		if (!y)
			return "y=" + std::to_string(y);
		else
			return "y=" + std::to_string(y) + " или y=-" + std::to_string(y);
}