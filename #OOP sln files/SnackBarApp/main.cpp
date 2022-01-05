#include<iostream>
#include"menu.h"
//#include"menuItem.h"
using namespace std;


int main()
{
	Menu dishes(5);
	MenuItem a(CString("Biryani"), 100,10);

	MenuItem b(CString("chicken"), 150, 50);
	//MenuItem c(CString("mutton"), 200, 20);

	dishes.addItem(a);
	dishes.addItem(b);
//	dishes.displayMenu();

	
	
    //re.displayMenu();
	/*a.displayMenuItem(); cout << endl;
	a.setItemName(CString("REhman"));
	a.displayMenuItem();
	a.inputMenuItem();
	a.displayMenuItem();*/
	return 0;
}