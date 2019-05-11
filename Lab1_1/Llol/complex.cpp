#include "complex"
#include "complex.h"
#include "math.h"
using namespace std;


void Complex::sum(Complex c)
{
	re += c.re;
	im += c.im;
}
void Complex::sub(Complex c)
{
	re -= c.re;
	im -= c.im;
}
void Complex::mul(Complex c)
{
	r = re;
	re = re * c.re - im * c.im;
	im = r * c.im + im * c.re;
}
void Complex::div(Complex c)
{
	r = re;
	re = (re * c.re + im * c.im) / (c.re * c.re + c.im * c.im);
	im = (im * c.re - r * c.im) / (c.re * c.re + c.im * c.im);
}

