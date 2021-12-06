#pragma once
#include<string>

class Function
{
protected:

	double x, y, a, b;

public:
	Function(double _x, double _a, double _b);

	double getX();
	double getY();
	double getA();
	double getB();
	virtual std::string toString() = 0;

	void setX(double _x);
	void setA(double _a);
	void setB(double _b);
   
   virtual double f() = 0;
};