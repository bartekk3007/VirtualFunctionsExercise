#include <iostream>
#include "D1.h"

class D2 : public D1
{
	public:
	void pvf()
	{
		std::cout << "D2::pvf()\n";
	}
};