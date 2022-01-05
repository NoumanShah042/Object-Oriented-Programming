#ifndef MENUITEM_H
#define MENUITEM_H
#include"CString.h"

class MenuItem
{
	CString itemName;
	double price;
	int quantity;
	

public:

	


	MenuItem();
	MenuItem(const MenuItem & ref);  
	MenuItem & operator=(const MenuItem & ref);
	MenuItem(CString name,double price,int quty);
	void setItemName(CString newName);
	void setItemPrice(double newPrice);
	void setItemQuantity(double newQuantity);
	CString getItemName()const;
	double getItemPrice()const;
	int getItemQuantity()const;
	void displayMenuItem()const;
	void inputMenuItem();

	

};




#endif