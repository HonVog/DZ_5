#include <iostream>
#include "String_New.h"

using namespace std;

int main()
{
	String_New a(" Hello ");
	String_New b(a);
	a.print();
	b.print();
	
	
	return 0;
}
