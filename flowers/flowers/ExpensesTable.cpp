#include <iostream>
#include "ExpensesTable.h"
#include "Product.h"
#include "ExpenseRecord.h"



// конструктор
AnnualReport::AnnualReport( ExpenseRecord* pER) : ptrER(pER)
{ /* пусто */
}
void AnnualReport::display()
{
	cout << "Общий отчет\n------------ --\n" << endl;
	cout << "Расходы\n" << endl;
	expenses = ptrER->displaySummary();
	cout << "Расходы за все время:\t\t";
	cout << expenses << endl;

	/*cout << "Доходы\n" << endl;
	incomes = ptrIR->displaySummary();
	cout << "Доходы за все время:\t\t";
	cout << incomes << endl;*/
}

ExpenseRecord::~ExpenseRecord() // деструктор
{
	while (!vectPtrsExpenses.empty())
	{
		iter = vectPtrsExpenses.begin();
		delete* iter;
		vectPtrsExpenses.erase(iter);
	}
}
/*
void IncomeRecord::insertInc(Income* ptrInc)
{
	vectPtrsIncomes.push_back(ptrInc);
}*/