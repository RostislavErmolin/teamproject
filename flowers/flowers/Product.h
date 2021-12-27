#include <iostream>
#include <vector>
#include <list>
#include <numeric>
#include <string>

using namespace std;
void getaLine(string& inStr); 
char getaChar();
class Product {
private:
	
	string name;
	string description;
	float price;
	int count;
	int id;
	float OptPrice;
	
public:
	~Product();
	Product( string n, string d, float p,  int i, int c, float o);
	string getname();
	string getdescription();
	float getprice();
	int getcount();
	int getid();
	float getOptPrice();
	void setcount(int new_count);
};










