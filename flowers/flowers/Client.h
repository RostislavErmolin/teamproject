#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //��� accumulate()
#pragma once
#ifndef CLIENT_H
#define CLIENT_H
using namespace std;
class Client
{
private:
	string Sername; // ������� �������
public:
	Client(string s);
	~Client();
	string getSername(); //���������� ��� �������
};


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
