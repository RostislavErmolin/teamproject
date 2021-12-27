#include <iostream>
#include "ExpenseRecord.h"
#include "ExpensesTable.h"

void ExpenseRecord::insertExp(Expense* ptrExp)
{
	vectPtrsExpenses.push_back(ptrExp);
}

void ExpenseRecord::display()
{
	cout << "\nДата\tПолучатель\tКатегория\tСумма\n"
		<< "----------------------------------------\n" << endl;
	if (vectPtrsExpenses.size() == 0)
		cout << "***На данный момент нет расходов***\n" << endl;
	else
	{
		iter = vectPtrsExpenses.begin();
		while (iter != vectPtrsExpenses.end())
		{
			cout << (*iter)->day << '.' << (*iter)->month << '\t' << (*iter)->payee << '\t';
			cout << (*iter)->category << '\t' << (*iter)->amount << endl;
			iter++;
		}
		cout << endl;
	}
}

float ExpenseRecord::displaySummary()
{
	float totalExpenses = 0; //
	if (vectPtrsExpenses.size() == 0)
	{
		cout << "\tВсе категории\t0\n";
		return 0;
	}
	iter = vectPtrsExpenses.begin();
	while (iter != vectPtrsExpenses.end())
	{

		cout << '\t' << ((*iter)->category) << '\t' << ((*iter)->amount) << endl;
		totalExpenses += (*iter)->amount;
		iter++;
	}
	return totalExpenses;
}
