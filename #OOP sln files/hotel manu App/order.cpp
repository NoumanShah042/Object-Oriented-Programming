

#include<iostream>
#include"order.h"
using namespace std;


void orderMenu(HotelMenu h, Invoice & a, int dishNumber)
{
	memcpy(a.order[a.noOfItems].dishName,h.data[dishNumber].dishName, sizeof(a.order[a.noOfItems].dishName));
	memcpy(a.order[a.noOfItems].discriptiopn, h.data[dishNumber].discriptiopn, sizeof(a.order[a.noOfItems].discriptiopn));
	
      a.order[a.noOfItems].unitPrice = h.data[dishNumber].unitPrice;
	//a.order[a.noOfItems].dishName
}
