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

		cout << "1-�������� ����� �����" << endl;
		cout << "2-������ �������" << endl;
		cout << "3-�������� �����" << endl;
		cout << "4-���������� ���������:" << endl;
		// ��������� ������
		cout << "5-�������� �����:" << endl;
		//cout << "5-�����" << endl;
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
			ptrProductList->display();
			cout << "\n\n1-������� ��� ������\n";
			cout << "��������� ������������ �����?" << endl;
			cout << "������� y(yes)/n(no)" << endl;
			q = _getch();
			if (q == '1')
				ptrProductList->~ProductList();
			if (q == 'y' || q == 'Y') {
				ptrProductList->Productfind();
			}
			else
				cout << "����� ����� ������� ��� ������ � ����" << endl;
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
			cout << "���������� ���������:" << endl;
			ptrwaybillList->display();
			cout << "-------------------------------------------" << endl;
			cout << "�����:\t\t\t";
			ptrwaybillList->sum();
			cout << endl;
			system("pause");
			break;
		}
		// ��������� �������� � ����������
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
			cout << "�������� ����!"<<endl;
			system("pause");
				break;
		} 
	}
}