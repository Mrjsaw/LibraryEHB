#pragma once
using namespace std;
#include <iostream>
#include <string>

class Product
{
private:
	static int newID;
protected:
	string productNaam;
	int productID;
public:
	string getProductNaam();
	void setProductNaam(string vProductNaam);
	int getProductID();
	Product();
	Product(string vProductNaam);
	~Product();
};

