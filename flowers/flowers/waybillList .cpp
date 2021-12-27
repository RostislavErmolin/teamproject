#include <iostream>
#include"waybillAddScreen.h"
#include"Product.h"
#include "waybillList .h"
#include"waybillElement.h"
waybillList ::~waybillList()
{
	while (!setPtrswaybillElement.empty())
	{
		iterr = setPtrswaybillElement.begin();
		delete* iterr;
		setPtrswaybillElement.erase(iterr);
	}
}


void waybillList::insertwaybillList(waybillElement* ptrwE)
{
	setPtrswaybillElement.push_back(ptrwE);
}


void waybillList::display()
{
	if (setPtrswaybillElement.size() > 0) {

		cout << "\nID\t  Количество\n-------------------------------------------\n";
		if (setPtrswaybillElement.empty())
			cout << "***Нет записей***\n" << endl;
		else
		{
			iterr = setPtrswaybillElement.begin();
			while (iterr != setPtrswaybillElement.end())
			{
				cout << left << (*iterr)->getidProduct() << "\t" << (*iterr)->getcountProduct() << endl;
				*iterr++;
			}
			cout << "-------------------------------------------" << endl;
		}
	}
}