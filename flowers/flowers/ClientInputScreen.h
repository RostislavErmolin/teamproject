#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()
#include "Client.h"
#pragma once

#ifndef CLIENTINPUTSCREEN_H
#define CLIENTINPUTSCREEN_H
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
