#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()
#ifndef ExpenseInputScreen_H
#define ExpenseInputScreen_H
using namespace std;
class ExpenseRecord;
class ExpenseInputScreen
{
private:
	ExpenseRecord* ptrExpenseRecord; // запись о расходах
public:
	ExpenseInputScreen(ExpenseRecord*);
	void setExpense();
};


#endif