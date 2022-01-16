#include "missions.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool restart = false;
	do {
		cout << "   СПИСОК ЗАДАЧ: \n";
		for (int i = 0; i < N_MISSIONS; i++) {
			cout << missions[i] << endl;
		}
		cout << "____________________________________________________________\n";
		cout << "   Введите номер задачи: (0 - выход) ";
		short choice;
		cin >> choice;
		switch (choice) {
    		case 1:
    			mission_1();
        		break;
    		case 2:
				mission_2();
        		break;
    		case 3:
				mission_3();
        		break;
    		case 4:
				mission_4();
        		break;
    		case 5:
				mission_5();
        		break;
    		case 6:
				mission_6();
        		break;
    		default:
        		break;
    	}
		cout << "   Продолжим? да(+)";
		char more;
		cin >> more;
		if (more == '+')
			restart = true;
		if (choice == 0)
			break;
	} while (restart);
	return 0;
}