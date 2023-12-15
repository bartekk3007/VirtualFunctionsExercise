#include <iostream>
#include "D2.h"
#include "D21.h"
#include "D22.h"

int main()
{
	/*
	B1 b1obj;
	b1obj.vf();
	b1obj.f();

	D1 d1obj;
	d1obj.vf();
	d1obj.f();
	*/

	D2 d2obj;
	d2obj.pvf();
	d2obj.vf();
	d2obj.f();

	B1& b1ref = d2obj;
	b1ref.pvf();
	b1ref.vf();
	b1ref.f();

	std::cout << "Wskazniki\n";
	B1* b1newref = &d2obj;
	b1newref->B1::vf();

	B1* b1newref2 = &d2obj;
	b1newref2->vf();

	std::cout << '\n';

	D21 d21obj("slowo");
	d21obj.nazwa = "nazwa";
	d21obj.pvf();
	
	D22 d22obj(4);
	d22obj.number = 0;
	d22obj.pvf();

	B2& b2refa = d21obj;
	b2refa.f(d21obj);
	
	B2& b2refb = d22obj;
	b2refb.f(d22obj);

	B2& b2refc = d21obj;
	b2refc.f(d22obj);

	B2& b2refd = d22obj;
	b2refd.f(d21obj);

	return 0;
}