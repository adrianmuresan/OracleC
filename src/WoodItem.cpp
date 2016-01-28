
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

// Shipping time calculation


double WoodItem::getTime() 
{
	double shippingTime = 0;
	if (baseDeliveryTime >= 1 && baseDeliveryTime <= 100) 
	{
		shippingTime = 1;
	} 
	else if (baseDeliveryTime >= 101 && baseDeliveryTime <= 200) 
	{
		shippingTime = 2;
	} 
	else if (baseDeliveryTime >= 201 && baseDeliveryTime <= 300) 
	{
		shippingTime = 3;
	} 
	else if (baseDeliveryTime >= 301 && baseDeliveryTime <= 400) 
	{
		shippingTime = 4;
	} 
	else if (baseDeliveryTime >= 401 && baseDeliveryTime <= 500) 
	{
		shippingTime = 5;
	} 
	else if (baseDeliveryTime >= 501 && baseDeliveryTime <= 1000) 
	{
		shippingTime = 5.5;
	}
	if (strcmp(typeWood.c_str(), "Cherry") == 0) 
	{
		shippingTime *= 2.5;
	}

	else if (strcmp(typeWood.c_str(), "Curly Maple") == 0) 
	{
		shippingTime *= 1.5;

	} 
	else if (strcmp(typeWood.c_str(), "Genuine Mahogany") == 0) 
	{
		shippingTime *= 3;

	} 
	else if (strcmp(typeWood.c_str(), "Wenge") == 0) 
	{
		shippingTime *= 5;

	} 
	else if (strcmp(typeWood.c_str(), "White Oak") == 0) 
	{
		shippingTime *= 2.3;

	} 
	else if (strcmp(typeWood.c_str(), "Sawdust") == 0) 
	{
		shippingTime *= 1;

	}
	return shippingTime;
}
double WoodItem::getPrice() 
{

	return price;
}
string WoodItem::getType() 
{
	return typeWood;
}

