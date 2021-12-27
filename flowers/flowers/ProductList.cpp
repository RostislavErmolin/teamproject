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
	id = o;
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


void ProductList::edit() {
	string n_name, n_desc;
	float n_price, n_Optprice;
	int n_count;
	cout << "�������� ������ ��� ���������:" << endl;
	cout << "1-��������: " << endl;
	cout << "2-��������\n";
	cout << "3-����\n";
	cout << "4-���������� ����\n";
	cout << "5-����������\n";
	cout << "6-���������\n";
	int cim ;
	bool w = true, n = false, d = false, p = false, o = false, c = false;
	while (w == true) {
		cout << "�������� ����� �������\n";
		cin >> cim;
		switch (cim)
		{
		case 1: {
			cout << "������� ����� ���: " << endl;
			cin >> n_name;
			n = true;
			break;
		}
		case 2: {
			cout << "������� ����� ��������: " << endl;
			cin >> n_desc;
			d = true;
			break;
		}
		case 3: {
			cout << "������� ����� ����: " << endl;
			cin >> n_price;
			p = true;
			break;
		}
		case 4: {
			cout << "������� ����� ���������� ����: " << endl;
			cin >> n_Optprice;
			o = true;
			break;
		}
		case 5: {
			cout << "������� ����� ���������� ������: " << endl;
			cin >> n_count;
			c = true;
			break;
		}
		case 6: {
		 iter = setPtrsProduct.begin();
	      while (iter != setPtrsProduct.end())
	      {
		    if (id == ((*iter)->getid()))
		     {
				if (n == true)
				(*iter)->setname(n_name);
				if (p == true)
				(*iter)->setprice(n_price);
				if (c == true)
				(*iter)->setcount(n_count);
				if (d == true)
				(*iter)->setdescription(n_desc);
				if (o == true)
				(*iter)->setOptPrice(n_Optprice);
		     }
		     *iter++;
	      }
		  cout << "������ ������� ���������������" << endl;
		  w = false;
			break;
		}
		

		default: {
			cout << "��� ������ ������" << endl;
			system("pause");
			break;
		}
		}
	}
	
}