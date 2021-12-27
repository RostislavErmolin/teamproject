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
#include "ExpensesTable.h"
#include "ExpenseinputScreen.h"
#include "ExpenseRecord.h"
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

	ExpenseInputScreen* ptrExpInputScreen;
	IncomeRecord* ptrIncomeRecord;
	ExpenseRecord* ptrExpenseRecord;
	AnnualReport* ptrAnnualReport;

	
public:
UserInterface();
	~UserInterface();
	void interact();
};
#endif