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
};

class ProductList {
private:
	
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
	void Productfind();
};

/*class ProductLis {
private:
	
	ProductList* ptrProductList;
public:
	string renterName; 

};*/



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