#include <iostream>

#include"NamedSet.h"

using namespace std;

int main()
{
	

	NamedSet a("A",3,1,2,3);
	a.print();
	//NamedSet b("B", 5, 9, 8, 7, 6, 5);
	
	//b.print();
	/*NamedSet ns2("B");
	ns2.reSize(7);
	ns2.insert(10);
	ns2.insert(9);
	ns2.insert(8);
	ns2.insert(7);
	ns2.insert(6);
	ns2.print();*/

	//(a.calcUnion(b)).print();
	//(a.calcSymmetricDifference(b)).print();

	
	//cout << (4 << 2);

	a.displayPowerSet();
//	cout << a.getCardinality() << endl;
	/*cout << endl;
	cout<<a.getCardinality()<<"    "<< a.getCapacity();
	*/
	/*Set b(5);
	b.insert(2);
	b.insert(6);
	b.insert(7);
	b.insert(8);
	b.insert(9);
	b.print(); cout << endl;
	b = a;
	b.print();
	cout << endl;
*/


	//a.calcSymmetricDifference(b);


	/*Set c(a.calcUnion(b));
	c.print();
	cout << endl;
	Set d (a.calcInterSection(b));
	d.print();*/
}
