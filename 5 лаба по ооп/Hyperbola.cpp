#include "Hyperbola.h"
#include<iostream>

Hyperbola::Hyperbola(double _x, double _a, double _b) :Function(_x, _a, _b)
{}

double Hyperbola::f()
{
	if (pow(x, 2) / pow(a, 2) - 1 < 0)
		y = 0;
	else
		y = y = sqrt((pow(x, 2) / pow(a, 2) - 1) * pow(b, 2));
	return y;
}

std::ostream& operator<<(std::ostream& out, Hyperbola& obj)
{
	obj.f();
	if (pow(obj.x, 2) / pow(obj.a, 2) - 1 < 0)
		out << "у неопределен\n";
	else
		if (!obj.y)
			out << "x=" << obj.x << " y=" << obj.y << " a=" << obj.a << " b=" << obj.b << "\n";
		else
			out << "x=" << obj.x << "\ny=" << obj.y << " или y=-" << obj.y << "\na=" << obj.a << "\nb=" << obj.b << "\n";
	return out;
}

std::istream& operator>>(std::istream& in, Hyperbola& obj)
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

std::string Hyperbola::toString()
{
	f();
	if (pow(x, 2) / pow(a, 2)-1 < 0)
		return "у неопределен\n";
	else
		if (!y)
			return "y=" + std::to_string(y);
		else
			return "y=" + std::to_string(y) + " или y=-" + std::to_string(y);
}

double Hyperbola::getY()
{
	if (y == 0)
		f();
	if (pow(x, 2) / pow(a, 2) - 1 < 0)
		return y = 0;
	else
		return y;
}