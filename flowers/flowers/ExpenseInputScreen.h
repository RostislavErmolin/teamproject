#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //��� accumulate()
#ifndef ExpenseInputScreen_H
#define ExpenseInputScreen_H
using namespace std;
class ExpenseRecord;
class ExpenseInputScreen
{
private:
	ExpenseRecord* ptrExpenseRecord; // ������ � ��������
public:
	ExpenseInputScreen(ExpenseRecord*);
	void setExpense();
};


#endif