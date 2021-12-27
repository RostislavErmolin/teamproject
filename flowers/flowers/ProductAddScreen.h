#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()

#ifndef ProductAddScreen_H
#define ProductAddScreen_H
using namespace std;
class ProductList;
class Product;
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
	ProductAddScreen(ProductList* ptrPL) : ptrProductList(ptrPL) {}
	void setProduct();
};
#endif

