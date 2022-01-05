#include<iostream>
#include"menuItem.h"
using namespace std;

//           MenuItem::


MenuItem::MenuItem():itemName()
{
	cout << "\nMenuItem():itemName()\n";
	price = 0;
	quantity = 0;
}
MenuItem::MenuItem(const MenuItem & ref)
{
	cout << "\nMenuItem(const MenuItem & ref)\n";

	if (this == &ref)
	{
		return;
	}
	itemName = ref.itemName;
	price = ref.price;
	quantity = ref.quantity;
}

MenuItem &  MenuItem::operator=(const MenuItem & ref)
{
	cout << "\noperator=(const MenuItem & ref)\n";
	if (this == &ref)
	{
		return *this;
	}
	itemName.~CString();

	itemName = ref.itemName;
	price = ref.price;
	quantity = ref.quantity;

	return *this;
}

MenuItem::MenuItem(CString name, double price, int quty):itemName(name)
{
	this->price =price;
	quantity = quty;
}
void MenuItem::setItemName(CString newName)
{
	this->itemName.~CString();
	this->itemName += (newName);
}
void MenuItem::setItemPrice(double newPrice)
{
	price = newPrice;
}
void MenuItem::setItemQuantity(double newQuantity)
{
	quantity = newQuantity;
}
CString MenuItem::getItemName()const
{
	return itemName;
}
double MenuItem::getItemPrice()const
{
	return price;
}
int MenuItem::getItemQuantity()const
{
	return quantity;
}

void MenuItem::displayMenuItem()const
{
	cout << "\n";
	cout << "Item Name    :";
	itemName.display();
	cout << "\n";

	cout << "Item Price   :";
	cout << price<<"\n";

	cout << "item Quantity:";
	cout<<quantity << "\n";


}
void MenuItem::inputMenuItem()
{
	this->itemName.~CString();
	itemName.input();
}






