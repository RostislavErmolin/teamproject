#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()
#include "Client.h"
#pragma once

#ifndef CLIENTLIST_H
#define CLIENTLIST_H
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
#endif