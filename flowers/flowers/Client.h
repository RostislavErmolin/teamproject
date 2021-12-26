#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()
#pragma once
#ifndef CLIENT_H
#define CLIENT_H
using namespace std;
class Client
{
private:
	string Sername; // фамилия клиента
public:
	Client(string s);
	~Client();
	string getSername(); //возвращает имя клиента
};


class ClientList
{
private:
	// установить указатели на клиентов
	
	bool ck;

public:
	~ClientList(); // деструктор (удаление клиентов)
	void insertClient(Client*); // добавить клиента в список
	void display(); // вывод списка клиентов
	void Clientfind();
	list <Client*> setPtrsClnt; // указатели на класс клиентов
	list <Client*>::iterator iter; //итератор
};


class ClientInputScreen
{
private:
	ClientList* ptrClientList;
	string tSername;
public:
	ClientInputScreen(ClientList* ptrCL) : ptrClientList(ptrCL)
	{
		/* тут пусто */
	}
	void setClient(); // добавить данные о клиенте
};

#endif
