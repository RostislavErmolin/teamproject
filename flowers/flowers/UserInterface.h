#include <iostream>
#include <vector>
#include <list>
#include <numeric>
#include <string>
#include <conio.h>
#include "Product.h"
#include"ProductList.h"
#include "ProductAddScreen.h"
#include "Client.h"
#include "ClientList.h"
#include "ClientinputScreen.h"
#include"waybillAddScreen.h"
#include "waybillList .h"
#include"waybillElement.h"

#ifndef Userinterface_H
#define Userinterface_H
using namespace std; 

class UserInterface
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