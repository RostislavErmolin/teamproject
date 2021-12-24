#include <iostream>
#include "ExpensesTable.h"

ExpenseRecord::~ExpenseRecord() // деструктор
{
	while (!vectPtrsExpenses.empty())
	{
		iter = vectPtrsExpenses.begin();
		delete* iter; 
		vectPtrsExpenses.erase(iter);
	}
}

void ExpenseRecord:: insertExp(Expense* ptrExp)
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

// конструктор
ExpenseInputScreen::ExpenseInputScreen(ExpenseRecord * per) : ptrExpenseRecord(per)
{
}

void ExpenseInputScreen::setExpense()
{
	int month, day;
	string category, payee;
	float amount;
	cout << "Введите день: ";
	cin >> day;
	cin.ignore(80, '\n');
	cout << "Введите месяц: ";
	cin >> month;
	cin.ignore(80, '\n');
	cout << "Введите получателя: ";
	getaLine(payee);
	cout << "Введите категорию: ";
	getaLine(category);
	cout << "Введите сумму: ";
	cin >> amount;
	cin.ignore(80, '\n');
	Expense* ptrExpense = new Expense(month, day, category, payee, amount);
	ptrExpenseRecord->insertExp(ptrExpense);
}
AnnualReport::AnnualReport( ExpenseRecord* pER) : ptrER(pER){ /* пусто */}
void AnnualReport::display()
{
	cout << "Общий отчет\n------------ --\n" << endl;
	cout << "Расходы\n" << endl;
	expenses = ptrER->displaySummary();
	cout << "Расходы за все время:\t\t";
	cout << expenses << endl;
}