#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;



void mission_1()
{
	cout << "1) Площадь и периметр прямоугольника." << endl << "Введите длинну прямоугольника:" << endl;
	float a;
	cin >> a;
	cout << "И ширину прямоугольника:" << endl;
	float b;
	cin >> b;
	float area = a * b;
	float perimeter = 2 * (a + b);
	cout << "Площадь прямоугольника:  " << a << " * " << b << " = " << area << endl;
	cout << "Периметр прямоугольника: " << "2(" << a << " + " << b << ") = " << perimeter << endl << endl;
}

void mission_2()
{
	cout << "2) Длина окружности." << endl << "Введите диаметр окружности:" << endl;
	float d;
	cin >> d;
	float pi = 3.14;
	float circumference = pi * d;
	cout << "Длина окружности: " << pi << " * " << d << " = " << circumference << endl << endl;
}

void mission_3()
{
	cout << "3) Среднее арифметическое двух чисел." << endl << "Введите первое число:" << endl;
	float a;
	cin >> a;
	cout << "И второе число:" << endl;
	float b;
	cin >> b;
	float arithmetical_mean = (a + b)/2;
	cout << "Среднее арифметическое: (" << a << " + " << b << ")/2 = " << arithmetical_mean << endl << endl;
}

void mission_4()
{
	cout << "4) Сумма, разность, произведение и частное квадратов двух ненулевых чисел." << endl;
	float a;
	float b;
	do {
		cout << "Введите первое число (ненулевое):" << endl;
		cin >> a;
	} while (a == 0);

	do {
		cout << "И второе число (ненулевое):" << endl;
		cin >> b;
	} while (b == 0);

	float addition       = pow(a, 2) + pow(b, 2);
	float subtraction    = pow(a, 2) - pow(b, 2);
	float multiplication = pow(a, 2) * pow(b, 2);
	double division      = pow(a, 2) / pow(b, 2);
	cout << "Сумма квадратов:        " << pow(a, 2) << " + " << pow(b, 2) << " = " << addition << endl;
	cout << "Разность квадратов:     " << pow(a, 2) << " - " << pow(b, 2) << " = " << subtraction << endl;
	cout << "Произведение квадратов: " << pow(a, 2) << " * " << pow(b, 2) << " = " << multiplication << endl;
	cout << "Частное квадратов:      " << pow(a, 2) << " / " << pow(b, 2) << " = " << division << endl << endl;
}

void mission_5()
{
	cout << "5) Сумма, разность, произведение и частное модулей двух ненулевых чисел." << endl;
	float a;
	float b;
	do {
		cout << "Введите первое число (ненулевое):" << endl;
		cin >> a;
	} while (a == 0);

	do {
		cout << "И второе число (ненулевое):" << endl;
		cin >> b;
	} while (b == 0);
	

	float addition = fabs(a) + fabs(b);
	float subtraction = fabs(a) - fabs(b);
	float multiplication = fabs(a) * fabs(b);
	double division = fabs(a) / fabs(b);
	cout << "Сумма модулей:        " << fabs(a) << " + " << fabs(b) << " = " << addition << endl;
	cout << "Разность модулей:     " << fabs(a) << " - " << fabs(b) << " = " << subtraction << endl;
	cout << "Произведение модулей: " << fabs(a) << " * " << fabs(b) << " = " << multiplication << endl;
	cout << "Частное модулей:      " << fabs(a) << " / " << fabs(b) << " = " << division << endl << endl;
}