#include "tchar.h"
#include <iostream>
#include "ClientList.h"
//#include"Client.h"

void ClientList::Clientfind()
{
	string getSername;
	cout << "������� ���: ";
	cin >> getSername;
	bool ck = false;
	{
		iter = setPtrsClnt.begin();
		while (iter != setPtrsClnt.end())
		{
			if (getSername == ((*iter)->getSername()))
			{
				ck = true;
				cout << "Surname: " << (*iter)->getSername() << endl;
			}
			*iter++;
		}
	}
	if (!ck)
		cout << "Not found!\n" << endl;

}


//---------------------------------------------------------


void ClientList::display() // ����� ������ ��������
{
	cout << "\nSurname\n";
	if (setPtrsClnt.empty()) // ���� ������ �������� ����
		cout << "***No clients***\n" << endl; // ������� ������, ��� �� ����)
	else
	{
		iter = setPtrsClnt.begin();
		while (iter != setPtrsClnt.end()) // ������������� ���� ��������
		{
			cout << (*iter)->getSername() << endl;
			*iter++;
		}
	}
}
//---------------------------------------------------------
ClientList::~ClientList() // ����������
{
	while (!setPtrsClnt.empty()) // �������� ���� ��������,
	{ // �������� ���������� �� ����������
		iter = setPtrsClnt.begin();
		delete* iter;
		setPtrsClnt.erase(iter);
	}

}
//---------------------------------------------------------
void ClientList::insertClient(Client* ptrT)
{
	setPtrsClnt.push_back(ptrT); // ������� ������ ������� � ������
}