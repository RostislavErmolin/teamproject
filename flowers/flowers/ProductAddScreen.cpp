#include <iostream>
#include"ProductAddScreen.h"
#include "Product.h"
#include"ProductList.h"
void ProductAddScreen::setProduct()
{
	bool ck = false;
	tid = ptrProductList->getiid();
	cout << "������� �������� ������:" << endl;
	cin >> (tname);
	cout << "������� �������� ������:" << endl;
	cin >> (tdescription);
	cout << "������� ���� ������:" << endl;
	cin >> tprice;
	cout << "������� ���������� ���� ������:" << endl;
	cin >> tOptPrice;
	cout << "������� ���������� ������: " << endl;
	cin >> tcount;
	//cin.ignore(255, '\n');
	Product* ptrProduct = new Product(tname, tdescription, tprice, tid, tcount, tOptPrice);
	ptrProductList->insertProduct(ptrProduct);

}