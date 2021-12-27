#include <iostream>
#include "ExpenseinputScreen.h"
#include "ExpensesTable.h"
#include"ExpenseRecord.h"
ExpenseInputScreen::ExpenseInputScreen(ExpenseRecord* per) : ptrExpenseRecord(per)
{
}

void ExpenseInputScreen::setExpense()
{
	int month, day;
	string category, payee;
	float amount;
	cout << "¬ведите день: ";
	cin >> day;
	cin.ignore(80, '\n');
	cout << "¬ведите мес€ц: ";
	cin >> month;
	cin.ignore(80, '\n');
	cout << "¬ведите получател€: ";
	getaLine(payee);
	cout << "¬ведите категорию: ";
	getaLine(category);
	cout << "¬ведите сумму: ";
	cin >> amount;
	cin.ignore(80, '\n');
	Expense* ptrExpense = new Expense(month, day, category, payee, amount);
	ptrExpenseRecord->insertExp(ptrExpense);
}