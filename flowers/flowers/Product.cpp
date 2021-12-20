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
	cout << "������� �������� ������:" << endl;
	getaLine(tname);
	cout << "������� �������� ������:" << endl;
	getaLine( tdescription);
	cout << "������� ���� ������:" << endl;
	cin >> tprice;
	cout << "������� ���������� ���� ������:" << endl;
	cin >> tOptPrice;
	cout << "������� ���������� ������: " << endl;
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
	cout << "\n��������\t ����\t\t ����������\n-------------------------------------\n";
	if (setPtrsProduct.empty()) 
		cout << "***��� �������***\n" << endl; 
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