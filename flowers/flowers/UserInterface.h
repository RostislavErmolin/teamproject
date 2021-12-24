#include <iostream>
#include <vector>
#include <list>
#include <numeric>
#include <string>
#include <conio.h>
#include "Product.h"
//#include "ExpensesTable.h"
//#include "Pay.h"


using namespace std; class UserInterface
{
private:
	ProductList* ptrProductList;
	ProductAddScreen* ptrProductAddScreen;
	waybillList* ptrwaybillList;
	waybillAddScreen* ptrwaybillAddScreen;

	//ExpenseRecord* ptrExpenseRecord;
	//ExpenseInputScreen* ptrExpenseInputScreen;
	//AnnualReport* ptrAnnualReport;
public:
UserInterface();
	~UserInterface();
	void interact();
};
