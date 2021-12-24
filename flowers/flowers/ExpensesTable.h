#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric>
using namespace std; 
void getaLine(string& inStr); // ��������� ������ ������
char getaChar(); // ��������� �������
//����� ������
class Expense
{
public:
int month, day;  
string category;  
 string payee;  
float amount;
Expense(){ }
Expense(int m, int d, string c, string p, float a) : //���������(�.����� ���������, ������, ��������, ������������ �������)
month(m), day(d), category(c), payee(p), amount(a)
{
}
}; 
//����� ������� � ��������
class ExpenseRecord
{
private:
vector<Expense*> vectPtrsExpenses; //������ ���������� �� �������
vector<Expense*>::iterator iter;
public:
~ExpenseRecord();
void insertExp(Expense*);
void display();
float displaySummary(); 
};
class ExpenseInputScreen
{
private:
ExpenseRecord* ptrExpenseRecord; // ������ � ��������
public:
ExpenseInputScreen(ExpenseRecord*);
void setExpense();
};
class AnnualReport
{
private:
	
	ExpenseRecord* ptrER; // ������ ��������
	float expenses; // ����� ������� � ��������
public:
	AnnualReport( ExpenseRecord*);
	void display(); // ����������� �������� ������
}; 
class Income
{
public:
	int month, day;
	float amount;
	Income(){ }
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
	//~IncomeRecord();
	//void insertInc(Income*);
	//void display();
	//float displaySummary();
};
class IncomeInputScreen
{
private:
	IncomeRecord* ptrIncomeRecord; // ������ � ��������
public:
	//IncomeInputScreen(IncomeRecord*);
	//void setIncome();
};