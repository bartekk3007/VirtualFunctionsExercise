#include <iostream>

class B2
{
	public:
	void virtual pvf() = 0;
	void f(B2& arg)
	{
		arg.pvf();
	}
};