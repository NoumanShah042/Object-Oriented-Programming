#pragma once

#include"hotelManu.h"
struct Invoice
{
	Dish order[20];
	int noOfItems;
};
//void creatInvoice(Invoice & a);

void orderMenu(HotelMenu,Invoice &,int dishNumber);
