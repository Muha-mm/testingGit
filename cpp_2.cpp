

#include "stdafx.h";
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int a = 100;
	int b = a + 24;
	int c = (a + b) * 2;
	cout << "a = " << a << endl << endl;
	cout << "b = " << b << endl << endl;
	cout << "c = " << c << endl << endl;

	return 0;
}
