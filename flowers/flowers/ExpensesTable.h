#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric>
#ifndef ExpensesTable_H
#define ExpensesTable_H

using namespace std; 
void getaLine(string& inStr); // ��������� ������ ������
char getaChar(); // ��������� �������
//����� ������
class ExpenseRecord;

class Expense
{
	public:
	int month, day;  
	string category;  
	string payee;  
	float amount;
	Expense() { }
	Expense(int m, int d, string c, string p, float a) : //���������(�.����� ���������, ������, ��������, ������������ �������)
		month(m), day(d), category(c), payee(p), amount(a)
	{
	}
}; 
//����� ������� � ��������


class Income
{
public:
	int month, day;
	float amount;
	Income()
	{ }
	Income(int m, int d,  float a) : //���������(�.����� ���������, ������, ��������, ������������ �������)
		month(m), day(d), amount(a)
	{
	}
};
//����� ������� � �������
class IncomeRecord
{
private:
	vector<Income*> vectPtrsIncomes; //������ ���������� �� �������
	vector<Income*>::iterator iter;
public:
	~IncomeRecord();
	void insertInc(Income*);
	void display();
	float displaySummary();
};
class IncomeInputScreen
{
private:
	IncomeRecord* ptrIncomeRecord; // ������ � ��������
public:
	IncomeInputScreen(IncomeRecord*);
	void setIncome();
};

class AnnualReport
{
private:

	ExpenseRecord* ptrER; // ������ ��������
	IncomeRecord* ptrIR; // ������ �������
	float expenses; // ����� ��������
	float incomes; // ����� �������
public:
	AnnualReport(ExpenseRecord*);// , IncomeRecord*);
	void display(); // ����������� �������� ������
};
#endif