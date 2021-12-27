#include <iostream>
#include "waybillElement.h"
waybillElement::~waybillElement()
{

}
waybillElement::waybillElement(int i, int c) : idProduct(i), countProduct(c)
{

}

int waybillElement::getidProduct() {
	return idProduct;
}

int waybillElement::getcountProduct() {
	return countProduct;
}