#include "Client.h"
#include "tchar.h"
#include <iostream>

Client::Client(string s) : Sername(s){
}
//---------------------------------------------------------
Client::~Client() // ����������
{
	
}
//---------------------------------------------------------
//--------------------------------------------------------
string Client::getSername() //������ ���������� ��� �������
{
	return Sername;
}
//---------------------------------------------------------