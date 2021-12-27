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
	cout << "������� ����: ";
	cin >> day;
	cin.ignore(80, '\n');
	cout << "������� �����: ";
	cin >> month;
	cin.ignore(80, '\n');
	cout << "������� ����������: ";
	getaLine(payee);
	cout << "������� ���������: ";
	getaLine(category);
	cout << "������� �����: ";
	cin >> amount;
	cin.ignore(80, '\n');
	Expense* ptrExpense = new Expense(month, day, category, payee, amount);
	ptrExpenseRecord->insertExp(ptrExpense);
}