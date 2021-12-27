#include "tchar.h"
#include <iostream>
#include "Client.h"
using namespace std;
Client::Client(string s) : Sername(s){
}
//---------------------------------------------------------
Client::~Client() // деструктор
{
	
}
//---------------------------------------------------------
//--------------------------------------------------------
string Client::getSername() //геттер возвращает имя клиента
{
	return Sername;
}



