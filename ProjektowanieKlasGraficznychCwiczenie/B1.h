#include <iostream>

class B1
{
	public:
	void virtual pvf() = 0;
	void virtual vf()
	{
		std:: cout << "B1::vf()\n";
	}
	void f()
	{
		std::cout << "B1::f()\n\n";
	}
};