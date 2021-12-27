#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> 

#ifndef waybillElement_H
#define waybillElement_H
using namespace std;
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

#endif