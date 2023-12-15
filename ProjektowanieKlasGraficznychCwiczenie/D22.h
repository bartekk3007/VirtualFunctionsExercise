#ifndef B2_H
#define B2_H
#include "B2.h"
#endif
#include <iostream>


class D22 : public B2
{
	public:
	int number;
	void virtual pvf()
	{
		std::cout << number << '\n';
	}
	D22(int n) : number(n)
	{

	}
};

