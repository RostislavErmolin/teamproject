#include "tchar.h"
#include <iostream>
#include "Client.h"
using namespace std;
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



