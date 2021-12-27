#include <iostream>
#include <vector>
#include <list>
#include <numeric>
#include <string>

using namespace std;
void getaLine(string& inStr); 
char getaChar();
class Product {
private:
	
	string name;
	string description;
	float price;
	int count;
	int id;
	float OptPrice;
	
public:
	~Product();
	Product( string n, string d, float p,  int i, int c, float o);
	string getname();
	string getdescription();
	float getprice();
	int getcount();
	int getid();
	// МЕТОДЫ ДЛЯ ИЗМЕНЕНИЯ ПРОДУКТОВ
	void setname(string new_name);
	void setdescription(string description);
	void setprice(float new_price);
	void setOptPrice(float new_OptPrice);
	void setcount(int new_count);
	float getOptPrice();
};

class ProductList {
private:
	//ProductList* ptrProductList;
	list <Product*> setPtrsProduct; 
	list <Product*>::iterator iter;
	int id;
	string nam;
	bool ck = false;
public:
	~ProductList();
	void insertProduct(Product*);
	void display();
	int getiid();
	int getidd(int);
	// ИЗМЕНЕНИЕ ПРОДУКТА
	void alterProduct();
	//ПОИСК ПРОДУКТА
	Product* Productfind();
	
};


class ProductAddScreen {
private:
	
	ProductList* ptrProductList;
	int tid;
	string tname;
	string tdescription;
	float tprice;
	int tcount;
	float tOptPrice;
	
public:
	
	ProductAddScreen(ProductList* ptrPL) : ptrProductList(ptrPL)
	{
		
	}

	void setProduct();
};


class waybillElement {
private:
	int idProduct;
	int countProduct;
public:
	~waybillElement();
	waybillElement(int i, int c);
	int getidProduct();
	int getcountProduct();

};

class ProductList;
class Product;

class waybillList :public ProductList {
private:
	list <waybillElement*> setPtrswaybillElement;
	list <waybillElement*>::iterator iterr;
	waybillList* ptrwaybillList;
	list <Product*> setPtrsProduct;
	list <Product*>::iterator iter;
	
	int date;
	int month;
	float summ ;
	int ID;
	friend  int ProductList::getidd(int);
	
public:
	
	~waybillList();
	void insertwaybillList(waybillElement*);
	void display();
	void sum();
	friend ProductList;
	int check(int);
	int getod(int);
};

class waybillAddScreen {
private:
	waybillList* ptrwaybillList;
	int tidProduct;
	int tcountProduct;
	float tprice;
public:

	waybillAddScreen(waybillList* ptrwE) : ptrwaybillList(ptrwE)
	{

	}

	void setwaybillElement();
};

