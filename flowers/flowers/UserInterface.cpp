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
		cout << "1-�������� ����� �����" << endl;
		cout << "2-������ �������" << endl;
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
			cout << "�������� �����:" << endl;
			c = true;
			break;
			

		case esc:
			break;
			
		default: cout << "������������ ����!"<<endl;
			system("pause");
			c = true;
			break;
		} 
	}
}