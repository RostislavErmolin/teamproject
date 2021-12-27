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
	cout << "Введите ID товара: ";
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
				cout << left << "ID: " << (*iter)->getid() << "\n" << "Наименование: " << (*iter)->getname() << "\n"
					<< "Описание: " << (*iter)->getdescription() << "\n" << "Розничная цена: " << (*iter)->getprice() << "\n" << "Закупочная цена: " << (*iter)->getOptPrice() << "\n"
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
	cout << "Выберете данные для изменения:" << endl;
	cout << "1-Название: " << endl;
	cout << "2-Описание\n";
	cout << "3-Цену\n";
	cout << "4-Закупочную цену\n";
	cout << "5-Количество\n";
	cout << "6-Сохранить\n";
	int cim ;
	bool w = true, n = false, d = false, p = false, o = false, c = false;
	while (w == true) {
		cout << "Выберете номер пунката\n";
		cin >> cim;
		switch (cim)
		{
		case 1: {
			cout << "Введите новое имя: " << endl;
			cin >> n_name;
			n = true;
			break;
		}
		case 2: {
			cout << "Введите новое описание: " << endl;
			cin >> n_desc;
			d = true;
			break;
		}
		case 3: {
			cout << "Введите новую цену: " << endl;
			cin >> n_price;
			p = true;
			break;
		}
		case 4: {
			cout << "Введите новую закупочную цену: " << endl;
			cin >> n_Optprice;
			o = true;
			break;
		}
		case 5: {
			cout << "Введите новое количество товара: " << endl;
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
		  cout << "Запись успешно отредактирована" << endl;
		  w = false;
			break;
		}
		

		default: {
			cout << "Нет такого пункта" << endl;
			system("pause");
			break;
		}
		}
	}
	
}