#include <iostream>
#include "Product.h"


void getaLine(string& inStr) 
{
	char temp[21];
	cin.get(temp, 20, '\n');
	cin.ignore(20, '\n'); 
	inStr = temp;
}
//---------------------------------------------------------
char getaChar() 
{
	char ch = cin.get();
	cin.ignore(80, '\n'); 
	return ch;
}

Product::Product( string n,  string d, float p, int i, int c, float o) : name(n),  description(d), price(p), id(i), count(c), OptPrice(o)
{
	
}
Product::~Product() 
{
	
}

string Product::getname()
{
	return name;
}
string Product::getdescription()
{
	return description;
}
 float Product::getprice()
{
	return price;
}
float Product::getOptPrice()
{
	return OptPrice;
}
int Product::getcount()
{
	return count;
}
int Product::getid()
{
	return id;
}


void Product::setname(string n_name)
{
	name = n_name;
}
void Product::setdescription(string n_desc)
{
	description = n_desc;
}
void Product::setprice(float n_price)
{
	price = n_price;
}
void Product::setOptPrice(float n_OptPrice)
{
	OptPrice = n_OptPrice;
}
void Product::setcount(int n_count)
{
	count = n_count;
}
