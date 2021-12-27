#include <iostream>
#include "ExpensesTable.h"
#include "Product.h"
#include "ExpenseRecord.h"



// �����������
AnnualReport::AnnualReport( ExpenseRecord* pER) : ptrER(pER)
{ /* ����� */
}
void AnnualReport::display()
{
	cout << "����� �����\n------------ --\n" << endl;
	cout << "�������\n" << endl;
	expenses = ptrER->displaySummary();
	cout << "������� �� ��� �����:\t\t";
	cout << expenses << endl;

	/*cout << "������\n" << endl;
	incomes = ptrIR->displaySummary();
	cout << "������ �� ��� �����:\t\t";
	cout << incomes << endl;*/
}

ExpenseRecord::~ExpenseRecord() // ����������
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