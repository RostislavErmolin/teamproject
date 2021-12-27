#include "tchar.h"
#include <iostream>
#include"ClientInputScreen.h"

void ClientInputScreen::setClient() // добавить данные о клиенте
{
	cout << "Введите имя покупателя: " << endl;
	cin >> tSername;
	Client* ptrClient = new Client(tSername); // создать клиента
	ptrClientList->insertClient(ptrClient); // занести в список клиентов
}