#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

void mission_1()
{
	cout << "1) Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2)" << endl;
	// √((x2 - x1)^2 + (y2 - y1)^2)
	double x1, y1, x2, y2, res;
	cout << "   Введите кординату x1 y1: ";
	cin >> x1 >> y1;
	cout << "   Введите кординату x2 y2: ";
	cin >> x2 >> y2;
	res = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	cout << "   Результат:  " << res << endl;
	cout << "____________________________________________________________" << endl;

}

void mission_2()
{
	cout << "2) Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму." << endl;
	int a, b, c, ac, bc, res;
	cout << "   Введите кординаты A B C: ";
	cin >> a >> b >> c;
	ac = c - a;
	bc = c - b;
	res = ac + bc;
	cout << "   Отрезок AC = " << ac << endl;
	cout << "   Отрезок BC = " << bc << endl;
	cout << "   Результат = " << res << endl;
	cout << "____________________________________________________________" << endl;
}

void mission_3()
{
	cout << "3) Даны три точки A, B, C на числовой оси." << endl;
	cout << "   Точка C расположена между точками A и B!" << endl;
	cout << "   Найти произведение длин отрезков AC и BC." << endl;
	int a, b, c, ac, bc, res;
	cout << "   Введите кординаты в порядке A C B: ";
	cin >> a >> c >> b;
	ac = c - a;
	bc = b - c;
	res = ac * bc;
	cout << "   Отрезок AC = " << ac << endl;
	cout << "   Отрезок BC = " << bc << endl;
	cout << "   Результат = " << res << endl;
	cout << "____________________________________________________________" << endl;
}

void mission_4()
{
	cout << "4) Даны координаты двух противоположных вершин прямоугольника: (x1, y1), (x2, y2)." << endl;
	cout << "   Стороны прямоугольника параллельны осям координат." << endl;
	cout << "   Найти периметр и площадь данного прямоугольника." << endl;
	int x1, x2, y1, y2, a, b, area, perimeter;
	cout << "   Введите кординату x1 y1: ";
	cin >> x1 >> y1;
	cout << "   Введите кординату x2 y2: ";
	cin >> x2 >> y2;
	a = abs(x1 - x2);
	b = abs(y1 - y2);
	area = a * b;
	perimeter = 2 * (a + b);
	cout << "   Получился прямоугольник со сторонами " << a << "x" << b << endl;
	cout << "   Площадь = " << area << endl;
	cout << "   Периметр = " << perimeter << endl;
	cout << "____________________________________________________________" << endl;
}

void mission_5()
{
	cout << "5) Даны координаты трех вершин треугольника: (x1, y1), (x2, y2), (x3, y3)." << endl;
	cout << "   Найти его периметр и площадь." << endl;
	double x1, x2, x3, y1, y2, y3, a, b, c, area, p, p2;
	cout << "   Введите кординату x1 y1: ";
	cin >> x1 >> y1;
	cout << "   Введите кординату x2 y2: ";
	cin >> x2 >> y2;
	cout << "   Введите кординату x3 y3: ";
	cin >> x3 >> y3;
	a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
	p = a + b + c;
	p2 = p / 2;
	area = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
	cout << "   Получился треугольник со сторонами " << a << "x" << b << "x" << c << endl;
	cout << "   Площадь = " << area << endl;
	cout << "   Периметр = " << p << endl;
	cout << "____________________________________________________________" << endl;
}