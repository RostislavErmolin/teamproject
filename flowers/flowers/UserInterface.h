#include <iostream>
#include <vector>
#include <list>
#include <numeric>
#include <string>
#include <conio.h>
#include "Product.h"
#include "Client.h"


#ifndef Userinterface_H
#define Userinterface_H
using namespace std; class UserInterface
{
private:
	ProductList* ptrProductList;
	ProductAddScreen* ptrProductAddScreen;
	waybillList* ptrwaybillList;
	waybillAddScreen* ptrwaybillAddScreen;
	ClientInputScreen* ptrClientInputScreen;
	ClientList* ptrClientList;
	
public:
UserInterface();
	~UserInterface();
	void interact();
};
#endif