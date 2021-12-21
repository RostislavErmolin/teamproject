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
		cout << "1-�������� ����� �����" << endl;
		cout << "2-������ �������" << endl;
		cout << "3-�������� �����" << endl;
		cout << "esc-��� ������ �� ���������" << endl;
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
			cout << "\n\n��������� ������������ �����?" << endl;
			cout << "������� y(yes)/n(no)" << endl;
			q = _getch();
			if (q == 'y' || q == 'Y') {
				ptrProductList->Productfind();
			}
			else
				cout << "����� ����� ������� ��� ������ � ����" << endl;
			system("pause");
			break;
		}
		case esc: {
			c = false;
			break; }
		default:
			cout << "�������� ����!"<<endl;
			system("pause");
				break;
		} 
	}
}