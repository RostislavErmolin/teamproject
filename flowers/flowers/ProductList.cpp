#include <iostream>
#include "Product.h"
#include"ProductList.h"

int ProductList::getiid()
{
	int iid = 0;
	if (setPtrsProduct.empty())
		iid = 0;
	else
		iid = setPtrsProduct.size();
	return iid;
}

int ProductList::getidd(int id)
{
	ck = false;
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
				cout << left << "ID: " << (*iter)->getid() << "\n" << "������������: " << (*iter)->getname() << "\n"
					<< "��������: " << (*iter)->getdescription() << "\n" << "��������� ����: " << (*iter)->getprice() << "\n" << "���������� ����: " << (*iter)->getOptPrice() << "\n"
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


