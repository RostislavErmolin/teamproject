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
	cout << "������� ID ������: ";
	cin >> o;
	p = getidd(o);
	if (ck == true)
	{
		iter = setPtrsProduct.begin();
		while (iter != setPtrsProduct.end())
		{
			if (p == ((*iter)->getid()))
			{
				cout << "ID: " << (*iter)->getid() << "\n" << "������������: " << (*iter)->getname() << "\n"
					<< "��������� ����: " << (*iter)->getprice() << "\n" << "���������� ����: " << (*iter)->getOptPrice() << "\n"
					<< "����������: " << (*iter)->getcount() << endl;
			}
			*iter++;
		}	
	}
	else
		cout << "������ ������ ���.\n" << endl;
	
}
void ProductList::display()
{
	cout << "\nID\t ��������\t ����\t ����������\n-------------------------------------------\n";
	if (setPtrsProduct.empty())
		cout << "***��� �������***\n" << endl;
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

