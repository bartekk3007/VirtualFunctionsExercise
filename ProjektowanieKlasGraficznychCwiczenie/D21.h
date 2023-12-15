#ifndef B2_H
#define B2_H
#include "B2.h"
#endif
#include <iostream>

class D21 : public B2
{
	public:
	std::string nazwa;
	void virtual pvf()
	{
		std::cout << nazwa << '\n';
	}
	D21(std::string s) : nazwa(s)
	{

	}
};