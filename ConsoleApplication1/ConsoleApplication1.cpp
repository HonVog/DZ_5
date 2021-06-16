#include <iostream>
#include "Flat.h"
#include "Overcoat.h"

int main()
{
	Overcoat q1{ "Shirt","Khrushchev", 10, 1000 };
	Overcoat q2;
	q2 = q1;
	q2.print();

	Flat f1;
	Flat f2{ "Hotel", 100, 2000000 };
	f1 = f2;
	f1.print();

	return 0;
}
