#include "missions.h"

int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

	const int N_MISSIONS = 7;
	string missions[N_MISSIONS] = {
		"Поменять местами содержимое переменных A и B",
		"Переместить значения переменных A в B, B — в C, C — в A",
		"Переместить значения переменных A в C, C — в B, B — в A",
		"Найти значение функции y = 3x^6 - 6x^2 - 7",
		"Найти значение функции y = 4(x-3)^6 - 7(x-3)^3 + 2",
		"Вычислить A^8",
		"Вычислить A^15"
	};

	bool restart = false;
	do {
		cout << "   СПИСОК ЗАДАЧ: \n";
		// Вывод массива строк на экран
		for (int i = 0; i < N_MISSIONS; i++)
		{
			short missionNum = i + 1;
			cout << missionNum << ") " << missions[i] << endl;
		}
		cout << "   Введите номер задачи: ";

		short choice;
		cin >> choice;
		if (choice == 1)
			mission_1();
		if (choice == 2)
			mission_2();
		if (choice == 3)
			mission_3();
		if (choice == 4)
			mission_4();
		if (choice == 5)
			mission_5();
		if (choice == 6)
			mission_6();
		if (choice == 7)
			mission_7();
		restart = true;

	} while (restart);

	return 0;
}