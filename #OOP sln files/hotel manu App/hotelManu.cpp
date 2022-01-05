

#include<iostream>
#include"hotelManu.h"
using namespace std;



void creatHotelMenu(HotelMenu & h)
{
	h.capacity = 10;
	
	//h.data = nullptr;
	h.data = new Dish[h.capacity];
	h.noOfItems = 0;
	


}

bool addDishInHotelManu(HotelMenu & menu, Dish d)
{
	//menu.data[menu.noOfItems].

	
	memcpy(menu.data[menu.noOfItems].dishName, d.dishName, sizeof(d.dishName));
	memcpy(menu.data[menu.noOfItems].discriptiopn, d.discriptiopn, sizeof(d.discriptiopn));
	//cout << "hu";
//	cout << menu.data[menu.noOfItems].dishName;
	menu.data[menu.noOfItems].unitPrice = d.unitPrice;


	menu.noOfItems = menu.noOfItems + 1;

	return 1;
}

void displayHotelManu(HotelMenu  h)
{

	for (int i = 0; i < h.noOfItems; i++)
	{
		//printDish(h.data[i]);

		
		cout << h.data[i].dishName << ".............." << h.data[i].unitPrice;
		cout << '\n';
	}


}
void inputDish(Dish & d)
{
	cout << "enetr dish name :";
	cin.getline(d.dishName, 70);
	cout << "enetr dish discription :";
	cin.getline(d.discriptiopn, 150);
	cout << "enetr dish unit Price :";
	cin >> d.unitPrice;

}

void printDish(Dish d)
{
	cout << "dish name :" << d.dishName << '\n';
	cout << "dish discription :" << d.discriptiopn << '\n';
	cout << "dish unit Price :" << d.unitPrice;


}

void memcpy(void * dest, void * src, size_t n)
{
	char * cdest = (char *)dest;
	char * csrc = (char *)src;
	for (int i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];

	}

}


bool removeDishFromHotelMenu(HotelMenu & h, const char * dishName)
{
	for (int i = 0; i < h.noOfItems; i++)
	{
		if (!strcmp(h.data[i].dishName, dishName))
		{
			memcpy(h.data[i].dishName, "removed", sizeof(h.data[i].dishName));
			memcpy(h.data[i].discriptiopn,"removed", sizeof(h.data[i].discriptiopn));
			//cout << "hu";
		//	cout << menu.data[menu.noOfItems].dishName;
			h.data[i].unitPrice = 0;




		}
	}

	return 1;
}


bool updateDishUnitPrice(HotelMenu & h, const char * dishName,int newUnitPrice)
{
	for (int i = 0; i < h.noOfItems; i++)
	{
		if (!strcmp(h.data[i].dishName, dishName))
		{
			h.data[i].unitPrice = newUnitPrice;
				//cout<<h.data[i];
			return 1;

		}
	}

	return 0;
}