#include "missions.h"

int main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода


	bool restart = false;
	do {
		cout << "   СПИСОК ЗАДАЧ: \n";
		// Вывод массива строк на экран
		for (int i = 0; i < N_MISSIONS; i++)
		{
			cout << missions[i] << endl;
		}
		cout << "____________________________________________________________\n";
		cout << "   Введите номер задачи (0 - выход): ";

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
		if (choice == 0)
			break;
		restart = true;

	} while (restart);

	return 0;
}