#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //��� accumulate()
#include "Client.h"
#pragma once

#ifndef CLIENTLIST_H
#define CLIENTLIST_H
class ClientList
{
private:
	// ���������� ��������� �� ��������

	bool ck;

public:
	~ClientList(); // ���������� (�������� ��������)
	void insertClient(Client*); // �������� ������� � ������
	void display(); // ����� ������ ��������
	void Clientfind();
	list <Client*> setPtrsClnt; // ��������� �� ����� ��������
	list <Client*>::iterator iter; //��������
};
#endif