#include <iostream>
#include "B1.h"

class D1 : public B1
{
	public:
	/*
	void pvf()
	{
		std::cout << "D1::pvf()\n";
	}
	*/
	void virtual vf()
	{
		std::cout << "D1::vf()\n";
	}
	void f()
	{
		std::cout << "D1::f()\n\n";
	}
};