#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //��� accumulate()
#pragma once
#ifndef Client_H
#define Client_H
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
