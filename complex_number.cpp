#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

class Complex{
public:
    float real, imag;

    
    void getReal() {
        cin>>real;
    }

    void getImag() {
        cin>>imag;
    }

    void display() {
        char operation;
        if(imag<0)
        std::cout << real << ' ' << imag << "i" << endl;
        else
        std::cout << real << ' ' << "+" << ' ' << imag << "i" << endl;
    }

    void add(Complex c1, Complex c2) {
        std::cout << "Addition of two complex numbers is ";
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void sub(Complex c1, Complex c2) {
        std::cout << "Subtraction of two complex numbers is: ";
        real = c1.real - c2.real;
        imag = c1.imag - c2.imag;
    }

    void mul(Complex c1, Complex c2) {
        std::cout << "Multiplication of two complex numbers is: ";
        real = (c1.real * c2.real) - (c1.imag * c2.imag);
        imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    }
