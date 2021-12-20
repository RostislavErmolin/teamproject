#include <iostream>
#include "Product.h"
void getaLine(string& inStr) 
{
	char temp[21];
	cin.get(temp, 20, '\n');
	cin.ignore(20, '\n'); 
	inStr = temp;
}
//---------------------------------------------------------
char getaChar() 
{
	char ch = cin.get();
	cin.ignore(80, '\n'); 
	return ch;
}

Product::Product(string n, string d, float p, int c, float o) : name(n), description(d), price(p), count(c), OptPrice(o)
{
	
}
Product::~Product() 
{
	
}
string Product::getname()
{
	return name;
}
string Product::getdescription()
{
	return description;
}
float Product::getprice()
{
	return price;
}
float Product::getOptPrice()
{
	return price;
}
int Product::getcount()
{
	return count;
}

void ProductAddScreen::setProduct()
{	
	cout << "Введите название товара:" << endl;
	getaLine(tname);
	cout << "Введите описание товара:" << endl;
	getaLine( tdescription);
	cout << "Введите цену товара:" << endl;
	cin >> tprice;
	cout << "Введите закупочную цену товара:" << endl;
	cin >> tOptPrice;
	cout << "Введите количество товара: " << endl;
	cin >> tcount;
	cin.ignore(80, '\n');
	Product* ptrProduct = new Product(tname, tdescription, tprice, tcount,tOptPrice);
	ptrProductList->insertProduct(ptrProduct);

}

ProductList::~ProductList() 
{
	while (!setPtrsProduct.empty()) 
	{ 
		iter = setPtrsProduct.begin();
		delete* iter;
			setPtrsProduct.erase(iter);
	}
}

void ProductList::insertProduct(Product* ptrP)
{
	setPtrsProduct.push_back(ptrP); 
}

void ProductList::display() 
{
	cout << "\nНазвание\t Цена\t\t Количество\n-------------------------------------\n";
	if (setPtrsProduct.empty()) 
		cout << "***Нет товаров***\n" << endl; 
	else
	{
		iter = setPtrsProduct.begin();
		while (iter != setPtrsProduct.end()) 
		{
			cout << " ||\t " << (*iter)->getname() << " ||\t " << (*iter)->getprice() <<  " ||\t "<< (*iter)->getcount() << " || " << endl;
			*iter++;
		}
	}
}