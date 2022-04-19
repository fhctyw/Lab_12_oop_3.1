#include <iostream>
#include "Rational.h"
#include <Windows.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Pair p(10, 3);
	Rational r = { 3, 4 };

	cout << r / p << endl;
	cout << r + p << endl;
	cout << r - (Rational)p << endl;

	r = p;
	cout << r << " " << p << endl;

	return 0;
}