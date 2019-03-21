#include "Product.h"



string Product::getProductNaam()
{
	return productNaam;
}

void Product::setProductNaam(string vProductNaam)
{
	this->productNaam = vProductNaam;
}

int Product::getProductID()
{
	return productID;
}


Product::Product()
{
}

Product::Product(string vProductNaam) : productID(newID++)
{
	this->productNaam = vProductNaam;
}


Product::~Product()
{
}
