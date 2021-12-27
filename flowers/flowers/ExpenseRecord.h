#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()
#ifndef ExpenseRecord_H
#define ExpenseRecord_H
using namespace std;
class Expense;
class ExpenseRecord
{
private:
	vector<Expense*> vectPtrsExpenses; //вектор указателей на расходы
	vector<Expense*>::iterator iter;
public:
	//ExpenseRecord(vector<Expense*> vectPtrsExpenses) {};
	~ExpenseRecord();
	void insertExp(Expense*);
	void display();
	float displaySummary();
};


#endif