#include <iostream>
#include"hotelManu.h"
#include"order.h"
using namespace std;






void orderMenu(HotelMenu h, Invoice & a , int dishNumber)
{
	if (dishNumber > h.noOfItems)
	{
		cout << "invalid dish Number";
		return;
	}
	memcpy(  a.order[a.noOfItems].dishName, h.data[dishNumber - 1].dishName, sizeof(h.data[dishNumber - 1].dishName));
	memcpy(a.order[a.noOfItems].discriptiopn, h.data[dishNumber - 1].discriptiopn, sizeof(h.data[dishNumber - 1].discriptiopn));

	a.noOfItems = a.noOfItems + 1;
	
}




int main()
{
	HotelMenu menu;
	
	//cout << strcmp("apple", "apple");

	creatHotelMenu(menu);
	Dish a, b, c;
	inputDish(a); cin.ignore();
	inputDish(b); cin.ignore();
	inputDish(c); cin.ignore();

	addDishInHotelManu(menu, a);
	addDishInHotelManu(menu, b);
	addDishInHotelManu(menu, c);

	cout << endl; cout << endl;
	displayHotelManu(menu); cout << endl; cout << endl; cout << endl;
	updateDishUnitPrice(menu, "biryani", 10);
	displayHotelManu(menu);

	removeDishFromHotelMenu(menu, "qorma");
	cout << endl; cout << endl;
	displayHotelManu(menu); cout << endl; cout << endl; cout << endl;
	//Invoice r;
	//creatInvoice(r);

	//orderMenu(manu, r, 1);
	//printDish(r.order[0]);

	//printDish(manu.data[0]);
	//displayHotelManu(manu);
	//printDish(manu.data[0]);
	//Dish d = { "biryani","very tasty",34 };
	//
	//addDishFromHotelManu(manu, d);
	
	
	
}