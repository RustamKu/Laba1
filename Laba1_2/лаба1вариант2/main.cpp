#include <iostream>
#include "complex.h"

int main() {
	FILE *myFile;
	int n;
	myFile = fopen("complex.txt", "r");
	fscanf(myFile, "%d", &n);
	Complex *p = new Complex[n];
	Complex ch;
	ch.init(0.0, 0.0);
	for (int i = 0; i < n; i++)
	{
		fscanf(myFile, "%lf %lf", &p[i].rel, &p[i].img);
		if (p[i].module() > ch.module())
		{
			ch.init(p[i].rel, p[i].img);
		}
	}
	ch.coutt();
	fclose(myFile);
}