#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //��� accumulate()
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
		/* ��� ����� */
	}
	void setClient(); // �������� ������ � �������
};
#endif
