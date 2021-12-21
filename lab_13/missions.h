#include <iostream>
#include <windows.h>
using namespace std;

const int N_MISSIONS = 5;
string missions[N_MISSIONS] = {
	"1) Конфеты",
	"2) Найти произведение",
	"3) Найти квадрат",
	"4) Найти сумму",
	"5) Найти значение выражения"
};
string missions_full[N_MISSIONS] = {
	"1) Дано вещественное число - цена 1 кг конфет. \n   Вывести стоимость 0.1, 0.2, ... , 1 кг конфет",
	"2) Дано целое число N (> 0). Найти произведение 1.1 * 1.2 * 1.3 * ... (N сомножителей).",
	"3) Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу: N^2 = 1 + 3 + 5 + ... + (2*N - 1)",
	"4) Дано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму 1 + A + A^2 + A^3 + ... + A^N",
	"5) Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения 1 - A + A2 - A3 + ... ± A^N"
};
void mission_1() {
	cout << missions_full[0] << endl;
	double price1, price, i, k = 0;
	cout << "   Введите стоимость 1 кг конфет: ";
	cin >> price1;
	for (i = 0; i < 10; i++) {
		k += 0.1;
		price = price1 * k;
		cout << "   " << k << "кг = " << price << endl;
	}

	cout << "____________________________________________________________\n";
}

void mission_2() {
	cout << missions_full[1] << endl;
	int n, i;
	double p = 1;
	double a = 1.1;
	cout << "   Введите N: ";
	cin >> n;
	for (i = 1; i <= n; i++) {
		p *= a;
		a += 0.1;
	}
	cout << "   Результат = " << p << endl;

	cout << "____________________________________________________________\n";
}

void mission_3() {
	cout << missions_full[2] << endl;
	int n, i, sum = 0;
	cout << "   Введите N: ";
	cin >> n;
	for (i = 1; i <= n; i++) {
		sum += (2 * i - 1);
		cout << "   " << sum << endl;
	}
	cout << "____________________________________________________________\n";
}

void mission_4() {
	cout << missions_full[3] << endl;
    float a, a2 = 1, rez = 1;
    int n, i;
    cout << "   A: ";
    cin >> a;
    cout << "   N: ";
    cin>>n;
    for (i = 2; i <= n; ++i) {
        a2 *= a;
        rez += a2;
    }
	cout << "   Результат = " << rez << endl;
	cout << "____________________________________________________________\n";
}

void mission_5() {
	cout << missions_full[4] << endl;
    float a, a2, a3 = 1, rez1 = 1, rez2 = 1;
    int n, i;
    cout << "   A:";
    cin >> a;
    cout << "   N:";
    cin >> n;
    for (i = 2; i <= n; ++i) {
        a2 *= a;
        rez1 += a2;
        a3 *= -a;
        rez2 += a3;
    }
	cout << "   Результат, при +A = " << rez1 << endl;
	cout << "   Результат, при -A = " << rez2 << endl;
	cout << "____________________________________________________________\n";
}