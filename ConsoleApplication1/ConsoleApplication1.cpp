#include <iostream>
#include <vector>

#include "Namber.h"
#include "Complex.h"

int main()
{
	Number n1{1,4};
	Number n2{3,5};
	n2 = n1 + n2;
	std::cout << n2.getI() <<'/'<<n2.getF()<< std::endl;

	Complex c1{6,2};
	Complex c2{4,9};
	c2 = c1 * c2;

	c2.print();
	
	return 0;
}
