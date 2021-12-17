#include <iostream>
#include <vector>
#include <list>
#include <numeric>
#include <string>
#include "Product.h"

using namespace std; class UserInterface
{
private:
	ProductList* ptrProductList;
	ProductAddScreen* ptrProductAddScreen;
	char ch;
public:
	UserInterface();
	~UserInterface();
	void interact();
};
