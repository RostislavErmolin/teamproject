#include <iostream>
#include "ExpensesTable.h"

ExpenseRecord::~ExpenseRecord() // ����������
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
	cout << "\n����\t����������\t���������\t�����\n"
		<< "----------------------------------------\n" << endl;
	if (vectPtrsExpenses.size() == 0)
		cout << "***�� ������ ������ ��� ��������***\n" << endl;
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
		cout << "\t��� ���������\t0\n";
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

// �����������
ExpenseInputScreen::ExpenseInputScreen(ExpenseRecord * per) : ptrExpenseRecord(per)
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
AnnualReport::AnnualReport( ExpenseRecord* pER) : ptrER(pER){ /* ����� */}
void AnnualReport::display()
{
	cout << "����� �����\n------------ --\n" << endl;
	cout << "�������\n" << endl;
	expenses = ptrER->displaySummary();
	cout << "������� �� ��� �����:\t\t";
	cout << expenses << endl;
}