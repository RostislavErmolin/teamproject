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
	float OptPrice;
public:
	~Product();
	Product(string n, string d, float p, int c, float o);
	string getname();
	string getdescription();
	float getprice();
	int getcount();
	float getOptPrice();
};

class ProductList {
private:
	list <Product*> setPtrsProduct; 
	list <Product*>::iterator iter;
public:
	~ProductList();
	void insertProduct(Product*);
	
	void display();
};

class ProductAddScreen {
private:
	ProductList* ptrProductList;
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