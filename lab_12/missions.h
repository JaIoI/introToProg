#include <iostream>
#include <windows.h>
using namespace std;
const int N_MISSIONS = 5;
string missions[N_MISSIONS] = {
	"1) ���� � ���� ������",
	"2) �����",
	"3) ���������� ������� �������",
	"4) C�����-�������� �����",
	"5) ���������"
};
string missions_full[N_MISSIONS] = {
	"1) ��� ����� ��� (1�31) � ������(1�12) \n   ������� ���� � ���� ������ (��������, ������ �������)",
	"2) ����� ����� ������������ � ������� ������������ \n   (�ѻ � �����, �ǻ � �����, �޻ � ��, �» � ������)\n   � ��������� ��� �������� �������: \n   0 � ���������� ��������, 1 � ������� ������, -1 � ������� �������. \n   ��� ������ C � �������� ����������� ������ \n   � ����� ����� N � ��������� ��� �������. \n   ������� ����������� ������ ����� ���������� ���������� �������",
	"3) ���� ����� ����� � ��������� 10�40, \n   ������������ ���������� ������� ������� �� ��������� ����. \n   ������� ������-�������� ���������� ���������� �������, \n   ��������� ���������� ������������ ����� �� ������� �������� �������, \n   ��������: 18 � ������������� ������� �������",
	"4) ���� ����� ����� � ��������� 100�999.\n   ������� ������-�������� ������� �����, \n   ��������: 256 � ������� ��������� ������",
	"5) �� ������ ���� ���������� ��� ��������,\n   ���� 1984 ��� � ������ �����: ���� ������� ������"
};

void mission_1() {
	string days[] = {"������","������","������","��������","�����","������","�������","�������","�������","�������","������������","�����������","�����������","�������������","�����������","������������","�����������","�������������","�������������","���������","�������� ������","�������� ������","�������� ������","�������� ��������","�������� �����","�������� ������","�������� �������","�������� �������","�������� �������","���������","�������� ������"};
	string months[] = {"������","�������","�����","������","���","����","����","�������","��������","�������","������","�������"};
	cout << missions_full[0] << endl;
	int d, m, y;
	bool x = false;
	cout << "   ������� ���: ";
	cin >> y;
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
		x = true;
	}
	do {
		cout << "   ������� ����� ������: ";
		cin >> m;
	} while (m < 0 && m > 12);
	
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		do {
			cout << "   ������� ����� ���(1-31): ";
			cin >> d;
		} while (d < 1 || d > 31);
	} else if (m == 2 && x == true) {
		do {
			cout << "   ������� ����� ������������ ���(1-29): ";
			cin >> d;
		} while (d < 1 || d > 29);
	} else if (m == 2 && x == false) {
		do {
			cout << "   ������� ����� ������������ ���(1-28): ";
			cin >> d;
		} while (d < 1 || d > 28);
	} else {
		do {
			cout << "   ������� ����� ���(1-30): ";
			cin >> d;
		} while (d < 1 || d > 30);
	}
	cout << endl << "   " << days[d - 1] << " " << months[m - 1] << endl;

	cout << "____________________________________________________________\n";
}

void mission_2() {
	cout << missions_full[1] << endl;
	char command[10];
	cout << "   ������� �������: ";
	cin >> command;
	if (command[0] == '�' || command[0] == '�') {
		if (command[1] == '-' && command[2] == '1')
			cout << "   ظ� �� �����, �������� �������, ��� �� ������! \n";
		if (command[1] == '1')
			cout << "   ظ� �� �����, �������� ������, ��� �� �����! \n";
		if (command[1] == '0')
			cout << "   ��� ��� �� �����, ��� � ���! \n";
	}
	if (command[0] == '�' || command[0] == '�') {
		if (command[1] == '-' && command[2] == '1')
			cout << "   ظ� �� ������, �������� �������, ��� �� ��! \n";
		if (command[1] == '1')
			cout << "   ظ� �� ������, �������� ������, ��� �� �����! \n";
		if (command[1] == '0')
			cout << "   ��� ��� �� ������, ��� � ���! \n";
	}
	if (command[0] == '�' || command[0] == '�') {
		if (command[1] == '-' && command[2] == '1')
			cout << "   ظ� �� ��, �������� �������, ��� �� �����! \n";
		if (command[1] == '1')
			cout << "   ظ� �� ��, �������� ������, ��� �� ������! \n";
		if (command[1] == '0')
			cout << "   ��� ��� �� ��, ��� � ���! \n";
	}
	if (command[0] == '�' || command[0] == '�') {
		if (command[1] == '-' && command[2] == '1')
			cout << "   ظ� �� �����, �������� �������, ��� �� �����! \n";
		if (command[1] == '1')
			cout << "   ظ� �� �����, �������� ������, ��� �� ��! \n";
		if (command[1] == '0')
			cout << "   ��� ��� �� �����, ��� � ���! \n";
	}

	cout << "____________________________________________________________\n";
}

void mission_3() {
	cout << missions_full[2] << endl;
	int num;
	string var = "������� �������", var1 = "������� �������", var2 = "������� �������";
	string numbers[] = {"������", "�����������", "����������", "����������", "������������", "����������", "�����������", "����������", "������������", "������������", "��������", "�������� ����", "�������� ���", "�������� ���", "�������� ������", "�������� ����", "�������� �����", "�������� ����", "�������� ������", "�������� ������", "��������", "�������� ����", "�������� ���", "�������� ���", "�������� ������", "�������� ����", "�������� �����", "�������� ����", "�������� ������", "�������� ������", "�����"};
	do {
		cout << "   ������� �����(10-40): ";
		cin >> num;
	} while (num < 10 || num > 40);
	if (num == 21 || num == 31)
		var = var1;
	else if ((num >= 22 && num <= 24) || (num >= 32 && num <= 34))
		var = var2;
	cout << "   " << num << " � �" << numbers[num - 10] << " " << var << "� \n";
	
	cout << "____________________________________________________________\n";
}

void mission_4() {
	cout << missions_full[3] << endl;
	int K;
	cout << "   ������� ����� ����� � ��������� 100�999:  ";
	cin >> K;
	cout << "   " << K << " - ";
	switch (K / 100) {
		case 1: cout << "��� "; break;
		case 2: cout << "������ "; break;
		case 3: cout << "������ "; break;
		case 4: cout << "��������� "; break;
		case 5: cout << "������� "; break;
		case 6: cout << "�������� "; break;
		case 7: cout << "������� "; break;
		case 8: cout << "��������� "; break;
		case 9: cout << "��������� "; break;
	}
	switch ((K % 100) / 10) {
		case 0: break;
		case 2: cout << "�������� "; break;
		case 3: cout << "�������� "; break;
		case 4: cout << "����� "; break;
		case 5: cout << "��������� "; break;
		case 6: cout << "���������� "; break;
		case 7: cout << "��������� "; break;
		case 8: cout << "����������� "; break;
		case 9: cout << "��������� "; break;
		case 1: switch (K % 100) {
			case 11: cout << "����������� "; break;
			case 12: cout << "���������� "; break;
			case 13: cout << "���������� "; break;
			case 14: cout << "������������ "; break;
			case 15: cout << "���������� "; break;
			case 16: cout << "����������� "; break;
			case 17: cout << "���������� "; break;
			case 18: cout << "������������ "; break;
			case 19: cout << "������������ "; break;
			case 10: cout << "������ "; break;
		}
	}
	if ((K % 100 / 10) != 1) {
		switch (K % 10) {
			case 0: break;
			case 1: cout << "���� "; break;
			case 2: cout << "��� "; break;
			case 3: cout << "��� "; break;
			case 4: cout << "������ "; break;
			case 5: cout << "���� "; break;
			case 6: cout << "����� "; break;
			case 7: cout << "���� "; break;
			case 8: cout << "������ "; break;
			case 9: cout << "������ "; break;
		}
	}
	cout << endl;
	cout << "____________________________________________________________\n";
}

void mission_5() {
	cout << missions_full[4] << endl;

	int n;
	cout << "   ���: ";
	cin >> n;
	cout << "   ��� ";
	switch ((n) % 10) {
		case 0:
		case 1:
			cout << "���";
			break;
		case 2:
		case 3:
			cout << "����";
			break;
		case 4:
		case 5:
			cout << "����";
			break;
		case 6:
		case 7:
			cout << "�����";
			break;
		case 8:
		case 9:
			cout << "���";
			break;
	}
	switch ((n + 1) % 5) {
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 9:
		case 10:
		case 11:
			cout << "�� ";
			break;
		case 6:
		case 7:
		case 8:
			cout << "��� ";
			break;
	}
	switch ((n + 8) % 12) {
		case 0:
			cout << "����� \n";
			break;
		case 1:
			cout << "������ \n";
			break;
		case 2:
			cout << "����� \n";
			break;
		case 3:
			cout << "����� \n";
			break;
		case 4:
			cout << "������� \n";
			break;
		case 5:
			cout << "���� \n";
			break;
		case 6:
			cout << "������ \n";
			break;
		case 7:
			cout << "���� \n";
			break;
		case 8:
			cout << "�������� \n";
			break;
		case 9:
			cout << "������ \n";
			break;
		case 10:
			cout << "������ \n";
			break;
		case 11:
			cout << "������ \n";
			break;
	}
	cout << "____________________________________________________________\n";
}