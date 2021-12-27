#include <iostream>
#include <conio.h>
#include <iomanip>
#include <fstream>
#define esc 27
#include "UserInterface.h"

UserInterface::UserInterface()
{
	ptrProductList = new ProductList;
	ptrwaybillList = new waybillList;
	ptrClientList = new ClientList;

}

UserInterface::~UserInterface()
{
	delete ptrProductList;
	delete ptrwaybillList;
	delete ptrClientList;
}

void UserInterface::interact()
{
	char q;
	bool c = true;
	while (c == true) {
		system("cls");

		cout << "1-Добавить новый товар" << endl;
		cout << "2-Список товаров" << endl;
		cout << "3-Добавить товар в накладную" << endl;
		cout << "4-Посмотреть накладную:" << endl;
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
				cout << "\nr-Редактировать товар" << endl;
				q = _getch();
				if(q == 'r')
				ptrProductList->edit();
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
			cout << "Посмотреть накладную" << endl;
			ptrwaybillList->display();
			int  ID, count;
			float summ = 0;
			ptrwaybillList->iterr = ptrwaybillList->setPtrswaybillElement.begin();
			while (ptrwaybillList->iterr != ptrwaybillList->setPtrswaybillElement.end())
			{
				ID = (*ptrwaybillList->iterr)->getidProduct();
				count = (*ptrwaybillList->iterr)->getcountProduct();
				*ptrwaybillList->iterr++;
			}
			if (ptrProductList->setPtrsProduct.empty())
				cout << "В базе нет товаров\n";
			else {
				ptrProductList->iter = ptrProductList->setPtrsProduct.begin();
				while (ptrProductList->iter != ptrProductList->setPtrsProduct.end())
				{
					if (ID == ((*ptrProductList->iter)->getid()) )
					{
						if(count <= ((*ptrProductList->iter)->getcount()))
						summ = summ + (*ptrProductList->iter)->getprice() * count;
						else
							cout << "Столько нету" << endl;
					}
					
					*ptrProductList->iter++;
				}

				cout << "Итого:\t\t\t" << summ <<endl;
				
			}
			cout << "Провести накладную? \nYes(y)/No(n)\nd - Удалить накландную" << endl;
			char c = _getch();
			if (c == 'Y' || c == 'y') {
				system("cls");
				ptrClientInputScreen = new ClientInputScreen(ptrClientList);
				ptrClientInputScreen->setClient();
				delete ptrClientInputScreen;
				ofstream out;
				out.open(".\\PayList.txt");
				if (out.is_open())
				{
					if (ptrwaybillList->setPtrswaybillElement.empty())
						cout << "Нет записей\n" << endl;
					else
					{
						out << "Имя покупателя\t " << "ID\t" << "Количество\t" << endl;
						ptrClientList->iter = ptrClientList->setPtrsClnt.begin();
						while (ptrClientList->iter != ptrClientList->setPtrsClnt.end())
						{
							out << (*ptrClientList->iter)->getSername() << ";";
							*ptrClientList->iter++;
						}
						ptrwaybillList->iterr = ptrwaybillList->setPtrswaybillElement.begin();
						while (ptrwaybillList->iterr != ptrwaybillList->setPtrswaybillElement.end())
						{
							
							out << (*ptrwaybillList->iterr)->getidProduct() << ";" << (*ptrwaybillList->iterr)->getcountProduct() <<";"<<summ<< endl;
							*ptrwaybillList->iterr++;
						}
					}
				}
			}
			
			if (c == 'd') {
				delete ptrwaybillList;
			}
			system("pause");
			break;
		}
		
		case '5': {
			system("cls");
			
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

