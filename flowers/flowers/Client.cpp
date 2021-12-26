#include "Client.h"
#include "tchar.h"
#include <iostream>

>>>>>>> myfeature
Client::Client(string s) : Sername(s){
}
//---------------------------------------------------------
Client::~Client() // деструктор
{
	
}
//---------------------------------------------------------
//--------------------------------------------------------
string Client::getSername() //геттер возвращает имя клиента
{
	return Sername;
}
//---------------------------------------------------------


void ClientInputScreen::setClient() // добавить данные о клиенте
{
	cout << "Введите имя покупателя: " << endl;
	cin >> tSername;
	Client* ptrClient = new Client(tSername); // создать клиента
	ptrClientList->insertClient(ptrClient); // занести в список клиентов
}
//---------------------------------------------------------


void ClientList::Clientfind()
{
	string getSername;
	cout << "Введите имя: ";
	cin >> getSername;
	ck = false;
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


void ClientList::display() // вывод списка клиентов
{
	cout << "\nSurname\t\tItem\t\tQty\n";
	if (setPtrsClnt.empty()) // если список клиентов пуст
		cout << "***No clients***\n" << endl; // выводим запись, что он пуст)
	else
	{
		iter = setPtrsClnt.begin();
		while (iter != setPtrsClnt.end()) // распечатываем всех клиентов
		{
			cout << (*iter)->getSername() << endl;
			*iter++;
		}
	}
}
//---------------------------------------------------------
ClientList::~ClientList() // деструктор
{
	while (!setPtrsClnt.empty()) // удаление всех клиентов,
	{ // удаление указателей из контейнера
		iter = setPtrsClnt.begin();
		delete* iter;
		setPtrsClnt.erase(iter);
	}
	
}
//---------------------------------------------------------
void ClientList::insertClient(Client* ptrT)
{
	setPtrsClnt.push_back(ptrT); // вставка нового клиента в список
}
