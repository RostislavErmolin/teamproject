#include "tchar.h"
#include <iostream>
#include"ClientInputScreen.h"

void ClientInputScreen::setClient() // �������� ������ � �������
{
	cout << "������� ��� ����������: " << endl;
	cin >> tSername;
	Client* ptrClient = new Client(tSername); // ������� �������
	ptrClientList->insertClient(ptrClient); // ������� � ������ ��������
}