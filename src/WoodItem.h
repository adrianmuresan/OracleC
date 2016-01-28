/*
 * WoodItem.h
 */

#include <string.h>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

#ifndef WOODITEM_H_
#define WOODITEM_H_

class WoodItem {

public:

	string woodtype;
	double baseDeliveryTime;
	double price;

	// Member functions declaration
	WoodItem();
	WoodItem(std::string woodType, double deliveryTime, double itemPrice);
	double getTime();
	double getPrice();
	string getType();
	

};

#endif /* WOODITEM_H_ */
