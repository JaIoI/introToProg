#include "missions.h"

int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

	const int N_MISSIONS = 5;
	string missions[N_MISSIONS] = {
		"Расстояние между двумя точками.",
		"Найти длины отрезков AC и BC и их сумму.",
		"Найти произведение длин отрезков AC и BC.",
		"Найти периметр и площадь прямоугольника.",
		"Найти его периметр и площадь треугольника."
	};

	bool restart = false;
	do {
		cout << "   СПИСОК ЗАДАЧ:" << endl;
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
		restart = true;

	} while (restart);

	return 0;
}