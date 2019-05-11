#include "complex"
#include "complex.h"

void Complex::init(double re, double im)
{
	rel = re;
	img = im;
}
void Complex::coutt()
{
	std::cout << rel << " + " << img << "i" << std::endl;
}
double Complex::module()
{
	return sqrt(rel*rel + img*img);
}