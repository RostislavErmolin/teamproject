#include <iostream>
#include"waybillAddScreen.h"
#include"Product.h"
#include "waybillList .h"
#include"waybillElement.h"
void waybillAddScreen::setwaybillElement()
{
	cout << "������� ID ������:" << endl;
	cin >> tidProduct;
	cin.ignore(80, '\n');
	cout << "������� ���������� ������: " << endl;
	cin >> tcountProduct;
	cin.ignore(80, '\n');
	waybillElement* ptrwaybillElement = new waybillElement(tidProduct, tcountProduct);
	ptrwaybillList->insertwaybillList(ptrwaybillElement);

}