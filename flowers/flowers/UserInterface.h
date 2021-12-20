#include <iostream>
#include <vector>
#include <list>
#include <numeric>
#include <string>
#include <conio.h>
#include "Product.h"

using namespace std; class UserInterface
{
private:
	ProductList* ptrProductList;
	ProductAddScreen* ptrProductAddScreen;
public:
	UserInterface();
	~UserInterface();
	void interact();
};
