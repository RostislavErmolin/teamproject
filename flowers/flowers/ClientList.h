#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //��� accumulate()
#include"Client.h"

#ifndef ClientList_H
#define ClientList_H
using namespace std;
class Client;
class ClientList
{
private:
	// ���������� ��������� �� ��������
	Client* ptrClient;
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