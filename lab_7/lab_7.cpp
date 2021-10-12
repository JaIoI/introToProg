#include "missions.h"

int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

	const int N_MISSIONS = 6;
	string missions[N_MISSIONS] = {
		"Градусы в радианы",
		"Радианы в градусы",
		"Конфеты",
		"Автомобили",
		"Линейное уравнение A*x + B = 0 (A != 0)",
		"Система линейных уравнений A1*x + B1*y = C1, A2*x + B2*y = C2"
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
		restart = true;

	} while (restart);

	return 0;
}