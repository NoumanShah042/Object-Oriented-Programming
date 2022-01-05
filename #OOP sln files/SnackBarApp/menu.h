#ifndef MENU_H
#define MENU_H
#include"menuItem.h"


class Menu
{
	MenuItem ** itemList;
	int capacity;
	int noOFItems;
public:
	Menu(int capacity = 5);
	bool addItem(const MenuItem & ref);
	void displayMenu()const;
	Menu(const Menu & ref);
	Menu & operator=(const Menu & ref);
	~Menu();
};




#endif
