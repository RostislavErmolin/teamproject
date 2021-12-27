#include <iostream>
#include"waybillAddScreen.h"
#include"Product.h"
#include "waybillList .h"
#include"waybillElement.h"
void waybillAddScreen::setwaybillElement()
{
	cout << "¬ведите ID товара:" << endl;
	cin >> tidProduct;
	cin.ignore(80, '\n');
	cout << "¬ведите количество товара: " << endl;
	cin >> tcountProduct;
	cin.ignore(80, '\n');
	waybillElement* ptrwaybillElement = new waybillElement(tidProduct, tcountProduct);
	ptrwaybillList->insertwaybillList(ptrwaybillElement);

}