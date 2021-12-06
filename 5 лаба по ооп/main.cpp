#include<iostream>
#include"Ellipse.h"
#include"Hyperbola.h"

int main()
{
	setlocale(0, "");

	double y;
	Function* ptr = new Ellipse;

	std::cout << "¬ведите x,a,b дл€ эллипса\n";
	std::cin >> (*dynamic_cast<Ellipse*>(ptr));//пон€ть почему не работает std::cin>>*ptr; ведь по идее это уже переменна€ тема Ellipse*
	if (ptr)
		std::cout << ptr->toString() << "\n";

	delete ptr;
	ptr = new Hyperbola;

	std::cout << "¬ведите x,a,b дл€ гиперболы\n";
	std::cin >> (*dynamic_cast<Hyperbola*>(ptr));
	if (ptr)
		std::cout << ptr->toString() << "\n";

	
	return 0;
}