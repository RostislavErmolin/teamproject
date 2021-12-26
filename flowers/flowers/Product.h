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
	float getOptPrice();
	void setcount(int new_count);
};

class ProductList {
private:
	Product* prtProduct;
	//ProductList* ptrProductList;
	int id;
	string nam;
	bool ck = false;
public:
	list <Product*> setPtrsProduct;
	list <Product*>::iterator iter;
	~ProductList();
	void insertProduct(Product*);
	void display();
	int getiid();
    int getidd(int);
    void Productfind();
	//void ncount();
	
};


class ProductAddScreen {
private:
	ProductList* ptrProductList;
	Product* ptrProduct;
	int tid;
	string tname;
	string tdescription;
	float tprice;
	int tcount;
	float tOptPrice;
public:
	ProductAddScreen(ProductList* ptrPL) : ptrProductList(ptrPL){}
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

//class wa;
class waybillList  {
private:
	ProductList* ptrProductList;
	//wa* ptrwa;
	int date;
	int month;
	float summ ;
	int ID;
public:
	~waybillList();
	void insertwaybillList(waybillElement*);
	void display();
	list <waybillElement*> setPtrswaybillElement;
	list <waybillElement*>::iterator iterr;
	//void pay();
	//int check(int);
	//int getod(int);
	//waybillList(ProductList* ptrPL): ptrProductList(ptrPL) {}
};

/*class wa {
private:
	wa* prtwa;
	ProductList* ptrProductList;
	waybillList* ptrwaybillList;
public:
	//void sum();
	//wa(ProductList* ptrPL, waybillList*ptrwL) : ptrProductList(ptrPL), ptrwaybillList(ptrwL) {}
};*/

class waybillAddScreen {
private:
	waybillList* ptrwaybillList;
	string tclient;
	int tidProduct;
	int tcountProduct;
	float tprice;
public:
	waybillAddScreen(waybillList* ptrwE) : ptrwaybillList(ptrwE){}
	void setwaybillElement();
};

