#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric>
using namespace std; 
void getaLine(string& inStr); // получение строки текста
char getaChar(); // получение символа
//Класс затрат
class Expense
{
public:
int month, day;  
string category;  
 string payee;  
float amount;
Expense(){ }
Expense(int m, int d, string c, string p, float a) : //категория(з.плата работника, аренда, доставка, коммунальные платежи)
month(m), day(d), category(c), payee(p), amount(a)
{
}
}; 
//Класс записей о затратах
class ExpenseRecord
{
private:
vector<Expense*> vectPtrsExpenses; //вектор указателей на расходы
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
ExpenseRecord* ptrExpenseRecord; // запись о расходах
public:
ExpenseInputScreen(ExpenseRecord*);
void setExpense();
};
class AnnualReport
{
private:
	
	ExpenseRecord* ptrER; // записи расходов
	float expenses; // суммы доходов и расходов
public:
	AnnualReport( ExpenseRecord*);
	void display(); // отображение годового отчета
}; 
class Income
{
public:
	int month, day;
	float amount;
	Income(){ }
	Income(int m, int d,  float a) : //категория(з.плата работника, аренда, доставка, коммунальные платежи)
		month(m), day(d), amount(a)
	{
	}
};
//Класс записей о доходах
class IncomeRecord
{
private:
	vector<Income*> vectPtrsIncomes; //вектор указателей на расходы
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
	IncomeRecord* ptrIncomeRecord; // запись о расходах
public:
	//IncomeInputScreen(IncomeRecord*);
	//void setIncome();
};