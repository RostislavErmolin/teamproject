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

Product* ProductList::Productfind()
{
	int p, o;
	cout << "Введите ID товара: ";
	cin >> o;
	p = getidd(o);
	auto result = setPtrsProduct.begin();
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
	
	return *result;

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



waybillElement::~waybillElement()
{

}
waybillElement::waybillElement(int i, int c) : idProduct(i), countProduct(c)
{

}

int waybillElement::getidProduct() {
	return idProduct;
}

int waybillElement::getcountProduct() {
	return countProduct;
}


waybillList ::~waybillList()
{
	while (!setPtrswaybillElement.empty())
	{
		iterr = setPtrswaybillElement.begin();
		delete* iterr;
		setPtrswaybillElement.erase(iterr);
	}
}

void waybillAddScreen::setwaybillElement()
{
	cout << "Введите ID товара:" << endl;
	cin >> tidProduct;
	cout << "Введите количество товара: " << endl;
	cin >> tcountProduct;
	cin.ignore(80, '\n');
	waybillElement* ptrwaybillElement = new  waybillElement(tidProduct, tcountProduct);
	ptrwaybillList->insertwaybillList(ptrwaybillElement);

}
void waybillList::insertwaybillList(waybillElement* ptrw)
{
	setPtrswaybillElement.push_back(ptrw);
}


void waybillList::sum() {
	int t;
	string p;
	iterr = setPtrswaybillElement.begin();
	while (iterr != setPtrswaybillElement.end())
	{			
		ID = (*iterr)->getidProduct();
		t = ptrwaybillList->check(ID);
		//cout << "!!!" << ID<< "@@";
		iterr++;
	}
	
}
int waybillList::getod(int ID)
{
	iter = setPtrsProduct.begin();
	while (iter != setPtrsProduct.end())
	{
		if (ID == ((*iter)->getid()))
		{
			//cout << "qqqqq";
		}
		iter++;
	}
	return ID;

}
int waybillList::check(int ID) {
	int p;
	
	cout  << "$$$";
	return ID;
}

void waybillList::display()
{
	cout << "\nID\t  Количество\n-------------------------------------------\n";
	if (setPtrswaybillElement.empty())
		cout << "***Нет товаров***\n" << endl;
	else
	{
		iterr = setPtrswaybillElement.begin();
		while (iterr != setPtrswaybillElement.end())
		{
			cout << (*iterr)->getidProduct() << "\t" << (*iterr)->getcountProduct() << endl;
			*iterr++;
		}
	}
}


void Product::setname(string new_name)
{
	name = new_name;
}
void Product::setdescription(string new_description)
{
	description = new_description;
}
void Product::setprice(float new_price)
{
	price = new_price;
}
void Product::setOptPrice(float new_OptPrice)
{
	OptPrice = new_OptPrice;
}
void Product::setcount(int new_count)
{
	count = new_count;
}

// ИЗМЕНЕННЫЙ КОД
void ProductList::alterProduct() {

	auto curProduct = Productfind();

	cout << "input data to be changed" << endl; // �� ����� �������� ����� ������
	string new_name, new_description;
	float new_price, new_OptPrice;
	int new_count;

	cout << "New name: ";
	cin >> new_name;

	cout << "New description: ";
	cin >> new_description;

	cout << "New price: ";
	cin >> new_price;

	cout << "New count: ";
	cin >> new_count;

	cout << "New OptPrice: ";
	cin >> new_OptPrice;


	(curProduct)->setname(new_name);
	(curProduct)->setprice(new_price);
	(curProduct)->setcount(new_count);
	(curProduct)->setdescription(new_description);
	(curProduct)->setOptPrice(new_OptPrice);



	/*
	iter = setPtrsProduct.begin();
	while (iter != setPtrsProduct.end())
	{
		// if((*iter)->getZALUPA() == request){ // ������� ������� ��� ����������� ������ �� �������
		if (false) {
			(*iter)->setname(new_name);
			(*iter)->setprice(new_price);
			(*iter)->setcount(new_count);
			(*iter)->setdescription(new_description);
			(*iter)->setOptPrice(new_OptPrice);
			break;
		}
		*iter++;
	}*/
}