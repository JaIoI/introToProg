#include <iostream>
#include <windows.h>
using namespace std;

const int N_MISSIONS = 5;
string missions[N_MISSIONS] = {
	"1) �������",
	"2) ����� ������������",
	"3) ����� �������",
	"4) ����� �����",
	"5) ����� �������� ���������"
};
string missions_full[N_MISSIONS] = {
	"1) ���� ������������ ����� - ���� 1 �� ������. \n   ������� ��������� 0.1, 0.2, ... , 1 �� ������",
	"2) ���� ����� ����� N (> 0). ����� ������������ 1.1 * 1.2 * 1.3 * ... (N ������������).",
	"3) ���� ����� ����� N (> 0). ����� ������� ������� �����, ��������� ��� ��� ���������� ��������� �������: N^2 = 1 + 3 + 5 + ... + (2*N - 1)",
	"4) ���� ������������ ����� A � ����� ����� N (> 0). ��������� ���� ����, ����� ����� 1 + A + A^2 + A^3 + ... + A^N",
	"5) ���� ������������ ����� A � ����� ����� N (> 0). ��������� ���� ����, ����� �������� ��������� 1 - A + A2 - A3 + ... � A^N"
};
void mission_1() {
	cout << missions_full[0] << endl;
	double price1, price, i, k = 0;
	cout << "   ������� ��������� 1 �� ������: ";
	cin >> price1;
	for (i = 0; i < 10; i++) {
		k += 0.1;
		price = price1 * k;
		cout << "   " << k << "�� = " << price << endl;
	}

	cout << "____________________________________________________________\n";
}

void mission_2() {
	cout << missions_full[1] << endl;
	int n, i;
	double p = 1;
	double a = 1.1;
	cout << "   ������� N: ";
	cin >> n;
	for (i = 1; i <= n; i++) {
		p *= a;
		a += 0.1;
	}
	cout << "   ��������� = " << p << endl;

	cout << "____________________________________________________________\n";
}

void mission_3() {
	cout << missions_full[2] << endl;
	int n, i, sum = 0;
	cout << "   ������� N: ";
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
	cout << "   ��������� = " << rez << endl;
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
	cout << "   ���������, ��� +A = " << rez1 << endl;
	cout << "   ���������, ��� -A = " << rez2 << endl;
	cout << "____________________________________________________________\n";
}