#include<iostream>
#include"Ellipse.h"
#include"Hyperbola.h"

int main()
{
	setlocale(0, "");

	double y;
	Function* ptr = new Ellipse;

	std::cout << "������� x,a,b ��� �������\n";
	std::cin >> (*dynamic_cast<Ellipse*>(ptr));//������ ������ �� �������� std::cin>>*ptr; ���� �� ���� ��� ��� ���������� ���� Ellipse*
	if (ptr)
		std::cout << ptr->toString() << "\n";

	delete ptr;
	ptr = new Hyperbola;

	std::cout << "������� x,a,b ��� ���������\n";
	std::cin >> (*dynamic_cast<Hyperbola*>(ptr));
	if (ptr)
		std::cout << ptr->toString() << "\n";

	
	return 0;
}