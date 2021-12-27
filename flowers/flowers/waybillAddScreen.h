#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()

#ifndef waybillAddScreen_H
#define waybillAddScreen_H
using namespace std;
class waybillList ;
class waybillElement;
class waybillAddScreen {
private:
	waybillList* ptrwaybillList;
	string tclient;
	int tidProduct;
	int tcountProduct;
	float tprice;
public:
	waybillAddScreen(waybillList* ptrwE) : ptrwaybillList(ptrwE) {}
	void setwaybillElement();
};
#endif