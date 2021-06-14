#pragma once
#include <iostream>

class Complex
{
    double real;  // ������������ �����
    double imaginary;  // ������ �����

public:
    Complex(double rl, double im = 0) :real{ rl }, imaginary{ im }{}
    Complex(double rl) :Complex(rl, 0) {}
    Complex() :Complex(0, 0) {}
    Complex(const Complex& complex) :real{ complex.real }, imaginary{complex.imaginary} {}

    Complex& operator = (const Complex& complex) {
        real = complex.real ; imaginary = complex.imaginary;
        return (*this);
    }
    Complex& operator += (const Complex& complex) {
        real += complex.real; imaginary += complex.imaginary;
        return (*this);
    }

    // ���� � ����������
    void skan () {
        std::cout << "Enter real : ";
        std::cin >> real;
        std::cout << "Enter imaginary : ";
        std::cin >> imaginary;
    }         
    void print () {// �����
        std::cout << "real=" << real << "\n";
        std::cout << "imaginary=" << imaginary << "\n";
    }

    Complex operator + (Complex& x) // ��������� ����������� �����
    {
        return Complex (real = real + x.real, imaginary = imaginary + x.imaginary);
    }
    Complex operator -(Complex& x)  // ������� ����������� �����
    { 
        return Complex (real = real - x.real, imaginary = imaginary - x.imaginary);
    }
    Complex operator *(Complex& x)  // �������� ����������� �����
    {
        return Complex(real = real * x.real - imaginary * x.imaginary,
            imaginary = real * x.imaginary + imaginary * x.real);
    }

    Complex operator / (const Complex& x) // ������ ����������� ����� 
    {
        Complex complex;
        long double r = x.real * x.real + x.imaginary *x.imaginary;
        complex.real = (real * x.real + imaginary * x.imaginary) / r;
        complex.imaginary = (imaginary * x.imaginary - real * x.imaginary) / r;
        return complex;
    }
};

