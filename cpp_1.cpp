// ConsoleApplication38.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h";
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	int t = 2; // хранит количество упаковок
	int b = 3;
	int p = 1;

	float p_t = 100;
	float p_b = 101;
	float p_p = 102;


	int summ = 0;
	summ = (p_t*t) + (p_b*b) + (p_p*p);
	cout << "Общая стоимость покупки = "; // показываем расчет и общую стоимость на экран
	cout << " = " << summ << endl << endl;

    return summ;
}

