#include <iostream>
#include "UserInterface.h"
#define esc 27

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
	bool c = true;
	while (c == true) {
		system("cls");
		c = false;
		cout << "1-Добавить новый товар" << endl;
		cout << "2-Список товаров" << endl;
		switch (_getch())

		{

		case '1': 
			system("cls");
			ptrProductAddScreen = new ProductAddScreen(ptrProductList);
			ptrProductAddScreen->setProduct();
			delete ptrProductAddScreen;
			c = true;
			break;

		case '2': 
			system("cls");
			ptrProductList->display();
			system("pause");
			cout << "Выберете товар:" << endl;
			c = true;
			break;
			

		case esc:
			break;
			
		default: cout << "Неправильный ввод!"<<endl;
			system("pause");
			c = true;
			break;
		} 
	}
}