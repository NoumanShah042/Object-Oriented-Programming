#include<iostream>
#include"menu.h"
using namespace std;

//         Menu::


Menu::~Menu()
{
	if (!itemList)
	{
		itemList = nullptr;
		capacity = 0;
		noOFItems = 0;
		return;
	}

	for (int i = 0; i < capacity; i++)
	{
		delete itemList[i];
		itemList[i] = nullptr;
	}

	delete[] itemList;
	itemList = nullptr;
	capacity = 0;
	noOFItems = 0;

}
Menu::Menu(int capacity)
{
	this->capacity = capacity;
	noOFItems = 0;

	itemList = new MenuItem *[capacity];

	for (int i = 0; i < capacity; i++)
	{
		itemList[i] = new MenuItem;
	}
}
bool  Menu::addItem(const MenuItem & ref)
{
	if (noOFItems == capacity)
	{
		return 0;
	}

	itemList[noOFItems]->setItemName(ref.getItemName());
	itemList[noOFItems]->setItemPrice(ref.getItemPrice());
	itemList[noOFItems]->setItemQuantity(ref.getItemQuantity());

	noOFItems = noOFItems + 1;
	return 1;
}

void  Menu::displayMenu()const
{
	for (int i = 0; i < noOFItems; i++)
	{
		itemList[i]->displayMenuItem();
	}
}

Menu::Menu(const Menu & ref)
{
	

	capacity = ref.capacity;
	noOFItems = ref.noOFItems;

	itemList = new MenuItem *[capacity];

	for (int i = 0; i < capacity; i++)
	{
		itemList[i] = new MenuItem;
	}

	
	//cout << "\nnouman\n";
	for (int i = 0; i < noOFItems; i++)
	{
		//cout << "\nnouman\n";
		*itemList[i] = *ref.itemList[i];
		//cout << "\nsyed\n";



	//	cout << "\nnouman\n";
	//	//	ref.itemList[i]->displayMenuItem();
	//	*itemList[i] = (*(ref.itemList[i]));
	//	//b.displayMenuItem();
	//	cout << "\nSyed\n";
	//	itemList[i]->displayMenuItem();
	}
}

Menu & Menu::operator=(const Menu & ref)
{
	this->~Menu();

	capacity = ref.capacity;
	noOFItems = ref.noOFItems;

	itemList = new MenuItem *[ref.capacity];

	for (int i = 0; i < ref.capacity; i++)
	{
		itemList[i] = new MenuItem;
	}


	
	for (int i = 0; i < noOFItems; i++)
	{
		
		*itemList[i] = *ref.itemList[i];

	}

	return *this;
}
