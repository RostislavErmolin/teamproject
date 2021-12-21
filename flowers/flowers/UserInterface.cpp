#include <iostream>
#include <conio.h>
#define esc 27
#include "UserInterface.h"

UserInterface::UserInterface()
{
	ptrProductList = new ProductList;
}

UserInterface::~UserInterface()
{
	delete ptrProductList;
}

void UserInterface::interact()
{
	char q;
	bool c = true;
	while (c == true) {
		system("cls");
		cout << "1-Добавить новый товар" << endl;
		cout << "2-Список товаров" << endl;
		cout << "3-Заказать товар" << endl;
		cout << "esc-Для выхода из программы" << endl;
		switch (_getch())

		{


		case '1': {
			system("cls");
			ptrProductAddScreen = new ProductAddScreen(ptrProductList);
			ptrProductAddScreen->setProduct();
			delete ptrProductAddScreen;
			break;
		}
		case '2': {
			system("cls");
			ptrProductList->display();
			cout << "\n\nПосмотеть определенный товар?" << endl;
			cout << "Введите y(yes)/n(no)" << endl;
			q = _getch();
			if (q == 'y' || q == 'Y') {
				ptrProductList->Productfind();
			}
			else
				cout << "Нажми любую клавишу для выхода в меню" << endl;
			system("pause");
			break;
		}
		case esc: {
			c = false;
			break; }
		default:
			cout << "Неверный ввод!"<<endl;
			system("pause");
				break;
		} 
	}
}