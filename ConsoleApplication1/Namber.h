#pragma once
#include <iostream>
using namespace std;


class Number
{
	int i, f;
public:
	Number(int pI, int pF) :i {pI}, f {pF} {
		if (pF == 0) pF = 1;
	}
	Number(int pI):Number(pI, 1) {}
	Number() :Number(0, 1) {}

	Number& operator = (const Number number) {
		i = number.i; f = number.f;
		return (*this);
	}
	
	int getI() const { return Number::i; }
	int getF() const { return Number::f; }

	//сложение
	Number& operator + (Number& number2) {
	f *= number2.getF();
	i = (i * number2.getF() + number2.getI() * f); 
	return (*this);
	}
	
	// вычитание
	Number& operator - (Number& number2) {
		f = f * number2.getF();
		i = i * number2.getF() - number2.getI() * f;
		return (*this);
	}

	// умножение
	Number& operator *(Number& number2) {
		f = f * number2.getF();
		i = i * number2.getI();
		return (*this);
	}
	
	// деление
	Number& operator / (Number& number2) {
		f = f * number2.getI();
		i = i * number2.getF();
		return (*this);
	}	
};
