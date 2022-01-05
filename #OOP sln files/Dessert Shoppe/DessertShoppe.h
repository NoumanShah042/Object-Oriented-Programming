#ifndef DESSERT_SHOPPE
#define  DESSERT_SHOPPE
#include"CString.h"

class DessertShoppe
{
	static double _TAX_Rate;
	static const CString _STORE_NAME;
	static const int _MAX_ITEM_NAME_WIDTH;
public:
	static CString  centsToDollars(int cents);
	void setTaxRate(int a);
	
	double getTexRate();
	

};

#endif