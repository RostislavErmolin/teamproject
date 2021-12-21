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

Product::Product( string n,  string d, float p, int i, int c, float o) : name(n),  description(d), price(p), id(i), count(c), OptPrice(o)
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
	return OptPrice;
}
int Product::getcount()
{
	return count;
}
int Product::getid()
{
	return id;
}
int ProductList::getiid()
{
	int iid = 0;
	if (setPtrsProduct.empty())
		iid = 0;
	else
		iid = setPtrsProduct.size() ;
	return iid;
}
int ProductList::getidd(int id) 
{
	ck = false;
	string nam;
	iter = setPtrsProduct.begin();
	while (iter != setPtrsProduct.end())
	{ 
		if (id == ((*iter)->getid()))
		{
			ck = true;
		}
		iter++;
	}
	return id;
	
}

void ProductList::Productfind()
{
	int p, o;
	cout << "Введите ID товара: ";
	cin >> o;
	p = getidd(o);
	if (ck == true)
	{
		iter = setPtrsProduct.begin();
		while (iter != setPtrsProduct.end())
		{
			if (p == ((*iter)->getid()))
			{
				cout << "ID: " << (*iter)->getid() << "\n" << "Наименование: " << (*iter)->getname() << "\n"
					<< "Розничная цена: " << (*iter)->getprice() << "\n" << "Закупочная цена: " << (*iter)->getOptPrice() << "\n"
					<< "Количество: " << (*iter)->getcount() << endl;
			}
			*iter++;
		}	
	}
	else
		cout << "Такого товара нет.\n" << endl;
	
}
void ProductList::display()
{
	cout << "\nID\t Название\t Цена\t Количество\n-------------------------------------------\n";
	if (setPtrsProduct.empty())
		cout << "***Нет товаров***\n" << endl;
	else
	{
		iter = setPtrsProduct.begin();
		while (iter != setPtrsProduct.end())
		{
			cout << (*iter)->getid() << "\t" << (*iter)->getname() << "\t" << (*iter)->getprice() << "\t" << (*iter)->getcount() << endl;
			*iter++;
		}
	}
}


void ProductAddScreen::setProduct()
{	
	tid = ptrProductList->getiid();
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
	cin.ignore(255, '\n');
	Product* ptrProduct = new Product(tname,  tdescription, tprice, tid, tcount, tOptPrice);
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

