#include <iostream>
#include <conio.h>
#include "UserInterface.h"

//using namespace std;
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
		cout << "1-Добавить новый товар" << endl;
		cout << "2-Список товаров" << endl;
		switch (_getch())

		{

		case '1': 
			system("cls");
			ptrProductAddScreen = new ProductAddScreen(ptrProductList);
			ptrProductAddScreen->setProduct();
			delete ptrProductAddScreen;
			break;

		case '2': 
			system("cls");
			ptrProductList->display();
			break;
			system("cls");
		} 
	}
}