#include <iostream>
#include"ProductAddScreen.h"
#include "Product.h"
#include"ProductList.h"
void ProductAddScreen::setProduct()
{
	bool ck = false;
	tid = ptrProductList->getiid();
	cout << "¬ведите название товара:" << endl;
	cin >> (tname);
	cout << "¬ведите описание товара:" << endl;
	cin >> (tdescription);
	cout << "¬ведите цену товара:" << endl;
	cin >> tprice;
	cout << "¬ведите закупочную цену товара:" << endl;
	cin >> tOptPrice;
	cout << "¬ведите количество товара: " << endl;
	cin >> tcount;
	//cin.ignore(255, '\n');
	Product* ptrProduct = new Product(tname, tdescription, tprice, tid, tcount, tOptPrice);
	ptrProductList->insertProduct(ptrProduct);

}