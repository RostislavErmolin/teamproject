#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()
#include"ClientList.h"
//#include"Client.h"

#ifndef ClientinputScreen_H
#define ClientinputScreen_H
using namespace std;
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
