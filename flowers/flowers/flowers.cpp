#include <iostream>
#include <conio.h>
#include "UserInterface.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	UserInterface theUserInterface;
	theUserInterface.interact();
	return 0;
}
