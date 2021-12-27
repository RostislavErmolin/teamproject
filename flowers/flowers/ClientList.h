#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()
#include"Client.h"

#ifndef ClientList_H
#define ClientList_H
using namespace std;
class Client;
class ClientList
{
private:
	// установить указатели на клиентов
	Client* ptrClient;
	bool ck;

public:
	~ClientList(); // деструктор (удаление клиентов)
	void insertClient(Client*); // добавить клиента в список
	void display(); // вывод списка клиентов
	void Clientfind();
	list <Client*> setPtrsClnt; // указатели на класс клиентов
	list <Client*>::iterator iter; //итератор
};
#endif