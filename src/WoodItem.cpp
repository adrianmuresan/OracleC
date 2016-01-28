#include "WoodItem.h"
#include<cstring>
using namespace std;

WoodItem::WoodItem() 
{
	typeWood = "";
	baseDeliveryTime = 0.0;
	price = 0.0;
}

WoodItem::WoodItem(string woodType, 
				   double deliveryTime, double itemPrice) 
{
	typeWood = woodType;
	baseDeliveryTime = deliveryTime;

	// Prices per BF for order input

	if (strcmp(typeWood.c_str(), "Cherry") == 0) 
	{
		this->price = 5.95;
	}

	else if (strcmp(typeWood.c_str(), "Curly Maple") == 0) 
	{
		price = 6.00;

	} 
	
	else if (strcmp(typeWood.c_str(), "Genuine Mahogany") == 0) 
	{
		price = 9.60;

	} 
	else if (strcmp(typeWood.c_str(), "Wenge") == 0) 
	{
		price = 22.35;

	} 
	else if (strcmp(typeWood.c_str(), "White Oak") == 0) 
	{
		price = 6.70;

	} else if (strcmp(typeWood.c_str(), "Sawdust") == 0) 
	{
		price = 1.50;

	}

}