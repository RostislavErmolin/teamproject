#include <iostream>
#include <conio.h>
#define esc 27
#include "UserInterface.h"

UserInterface::UserInterface()
{
	ptrProductList = new ProductList;
	ptrwaybillList = new waybillList;

}

UserInterface::~UserInterface()
{
	delete ptrProductList;
	delete ptrwaybillList;
}

void UserInterface::interact()
{
	char q;
	bool c = true;
	while (c == true) {
		system("cls");

		cout << "1-Добавить новый товар" << endl;
		cout << "2-Список товаров" << endl;
		cout << "3-Провести товар" << endl;
		cout << "4-Посмотреть накладную:" << endl;
		// ИЗМЕНЕНИЕ ТОВАРА
		cout << "5-Изменить товар:" << endl;
		//cout << "5-отчет" << endl;
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
			ptrProductList->display();
			cout << "\n\n1-Удалить все товары\n";
			cout << "Посмотеть определенный товар?" << endl;
			cout << "Введите y(yes)/n(no)" << endl;
			q = _getch();
			if (q == '1')
				ptrProductList->~ProductList();
			if (q == 'y' || q == 'Y') {
				ptrProductList->Productfind();
			}
			else
				cout << "Нажми любую клавишу для выхода в меню" << endl;
			system("pause");
			break;
		}
		case '3': {
			system("cls");
			ptrwaybillAddScreen = new waybillAddScreen(ptrwaybillList);
			ptrwaybillAddScreen->setwaybillElement();
			system("pause");
			delete ptrwaybillAddScreen;
			break;
		}
		case '4': {
			system("cls");
			cout << "Посмотреть накладную:" << endl;
			ptrwaybillList->display();
			cout << "-------------------------------------------" << endl;
			cout << "Итого:\t\t\t";
			ptrwaybillList->sum();
			cout << endl;
			system("pause");
			break;
		}
		// ИЗМЕНЕНИЕ ПРОДУКТА В ИНТЕРФЕЙСЕ
		case '5': {
			ptrProductList->alterProduct();
			system("pause");
			break;
		}

		/*case '5': {
			system("cls");
			//ptrExpenseInputScreen->setExpense();

			system("pause");
			//ptrExpenseRecord->displaySummary();
			system("pause");
			break;
		}*/
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