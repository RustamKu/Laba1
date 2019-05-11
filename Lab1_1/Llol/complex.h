#ifndef Complex_h
#define Complex_h
#include <iostream>
struct Complex
{
	double re;
	double im;
	double r;
	void sum(Complex c);
	void sub(Complex c);
	void mul(Complex c);
	void div(Complex c);
};
#endif