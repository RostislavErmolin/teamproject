#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> 

#ifndef ProductList_H
#define ProductList_H
using namespace std;
class Product;
class ProductList {
private:
	Product* prtProduct;
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
};
#endif