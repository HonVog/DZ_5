#include <iostream>
#include "String.h"

using namespace std;

int main()
{
    String s1 (" and I am a C++ student. Please kill me ");
    String s2 = "I hate dynamic arrays ";
    String s3 = s1 + s2;
    s1.print(); s2.print(); s3.print();
    
}
