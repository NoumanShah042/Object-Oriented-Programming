#pragma once


struct Dish
{
	char dishName[70];
	char discriptiopn[150];
	int unitPrice;
};
struct HotelMenu
{

	
	Dish * data;
	int noOfItems;
	int capacity;

};

void printDish(Dish d);
void memcpy(void * dest, void * src, size_t n);
void inputDish(Dish & d);
void creatHotelMenu(HotelMenu & h);
bool addDishInHotelManu(HotelMenu & menu, Dish d);
void displayHotelManu(HotelMenu  h);
bool removeDishFromHotelMenu(HotelMenu & h,const char * dishName);
bool updateDishUnitPrice(HotelMenu & h, const char * dishName, int newUnitPrice);