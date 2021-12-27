#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()
#pragma once
#ifndef Client_H
#define Client_H
using namespace std;
class Client
{
private:
	string Sername; // фамилия клиента
public:
	Client(string s);
	~Client();
	string getSername(); //возвращает имя клиента
};

#endif
