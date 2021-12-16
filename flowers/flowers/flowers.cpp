#include <iostream>
#include <conio.h>


using namespace std;
int main()
{
	setlocale(0, "");
	
	cout << "Онлайн касса" << endl;
	cout << "Введите цифру:" << endl;
	cout << "1-Список товаров" << endl;
	cout << "2-Редактировать товар" << endl;
	cout << "3-Отчет" << endl;
	cout << "4-Добавить товар" << endl;
	cout << "5-Ввести расходы" << endl;
	cout << "6-Добавить заказчика" << endl;
	cout << "7-Добавить поставщика" << endl;
	cout << "8-Провести товар" << endl;
	cout << "9-Продать товар" << endl;
	cout << "-Войти в систему" << endl;
	
	switch (_getch()) {
	case'1': {
		cout << "Функция в разработке" << endl;
		break;
	}
	case'2': {
		system("cls");
		cout << "1-Удалить товар" << endl;
		cout << "2-Редактировать" << endl;

		switch (_getch()) {

		case'1': {
			cout << "Функция в разработке" << endl;
			break;
		}

		case'2': {
			cout << "Функция в разработке" << endl;
			break;
		}
		default: {
			cout << "Неверный ввод" << endl;
			break; }
		}
			break;
	}
	
	case'3': {
		cout << "Функция в разработке" << endl;
		break;
	}
	case'4': {
		cout << "Функция в разработке" << endl;
		break;
	}

	case'5': {
		cout << "Функция в разработке" << endl;
		break;
	}

	case'6': {
		cout << "Функция в разработке" << endl;
		break;
	}

	case'7': {
		cout << "Функция в разработке" << endl;
		break;
	}

	case'8': {
		cout << "Функция в разработке" << endl;
		break;
	}

	case'9': {
		cout << "Функция в разработке" << endl;
		break;
	}

	default: {
		cout << "Неверный ввод" << endl;
		break; 
	}

	}
	
	system("pause");
	return 0;
}