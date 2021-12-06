#include<iostream>
#include"Ellipse.h"
#include"Hyperbola.h"

int main()
{
	setlocale(0, "");

	Function* func = nullptr;

	func = new Ellipse(1, 3, 2);//x,a,b
	std::cout << "Ёллипс:\n";
	std::cout << func->toString() << "\n";
	delete func;

	func = new Hyperbola(2,1,3);//x,a,b
	std::cout << "√ипербола:\n";
	std::cout << func->toString() << "\n";

	delete func;
	func = nullptr;

	return 0;
}