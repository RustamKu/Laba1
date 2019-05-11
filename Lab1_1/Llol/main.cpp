#include <iostream>
#include "complex.h"
#include "math.h"
#include <string>

int main() {
	setlocale(LC_ALL, "Russian");
	Complex c1, c2;
	char c;
	std::string n = "Yes";
	do
	{
	std::cout << "������� ������ ����������� �����: ";
	std::cin >> c1.re >> c1.im;
	std::cout << std::endl;
	std::cout << "������� ������ ����������� �����: ";
	std::cin >> c2.re >> c2.im;

	std::cout
		<< "������� �������� ��������" << std::endl;
	std::cin >> c;
		switch (c) {
		case '+':
			c1.sum(c2);
			if (c1.im >= 0) {
				std::cout << c1.re << " + " << c1.im << "i" << std::endl;
			}
			else {
				std::cout << c1.re << " + " << c1.im << "i" << std::endl;
			}
			std::cout << "���� ������� ���������� ������� Yes" << std::endl;
			std::cout << "���� ������ ��������� ������ ������� No" << std::endl;
			std::cin >> n;
			break;
		case '-':
			c1.sub(c2);
			if (c1.im >= 0) {
				std::cout << c1.re << " + " << c1.im << "i" << std::endl;
			}
			else {
				std::cout << c1.re << " + " << c1.im << "i" << std::endl;
			}
			std::cout << "���� ������� ���������� ������� Yes" << std::endl;
			std::cout << "���� ������ ��������� ������ ������� No" << std::endl;
			std::cin >> n;
			break;
		case '*':
			c1.mul(c2);
			if (c1.im >= 0) {
				std::cout << c1.re << " + " << c1.im << "i" << std::endl;
			}
			else {
				std::cout << c1.re << " + " << c1.im << "i" << std::endl;
			}
			std::cout << "���� ������� ���������� ������� Yes" << std::endl;
			std::cout << "���� ������ ��������� ������ ������� No" << std::endl;
			std::cin >> n;
			break;
		case '/':
			c1.div(c2);
			if (c1.im >= 0) {
				std::cout << c1.re << " + " << c1.im << "i" << std::endl;
			}
			else {
				std::cout << c1.re << " + " << c1.im << "i" << std::endl;
			}
			std::cout << "���� ������� ���������� ������� Yes" << std::endl;
			std::cout << "���� ������ ��������� ������ ������� no" << std::endl;
			std::cin >> n;
			break;
		default:
			std::cout << "������ ��������" << std::endl;
		}
	} while (n == "Yes");
	return 0;
}