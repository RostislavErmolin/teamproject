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

#endif
