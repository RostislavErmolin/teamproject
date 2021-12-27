#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> 

#ifndef waybillList_H
#define waybillList_H
using namespace std;
class ProductList;
class waybillList {
private:
	ProductList* ptrProductList;
	int date;
	int month;
	float summ;
	int ID;
public:
	~waybillList();
	void insertwaybillList(waybillElement*);
	void display();
	list <waybillElement*> setPtrswaybillElement;
	list <waybillElement*>::iterator iterr;
};

#endif