#include "Client.h"
#include "tchar.h"
#include <iostream>
#include"ClientInputSCreen.h"
#include "ClientList.h"

void ClientInputScreen::setClient() // �������� ������ � �������
{
	cout << "������� ��� ����������: " << endl;
	cin >> tSername;
	Client* ptrClient = new Client(tSername); // ������� �������
	ptrClientList->insertClient(ptrClient); // ������� � ������ ��������
}