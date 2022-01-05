#include <iostream>
#include"Array.h"
#include"SetUsingArray.h"

using namespace std;

int main()
{
	Set a(5);
	a.insert(1);
	a.insert(2);
	a.insert(3);
	a.insert(4);
	a.insert(5);
	a.print();
	
	/*cout << endl;
	cout<<a.getCardinality()<<"    "<< a.getCapacity();
	*/
	Set b(5);
	b.insert(2);
	b.insert(6);
	b.insert(7);
	b.insert(8);
	b.insert(9);
	

	b.print();
	cout << endl;

	
	
	a.calcSymmetricDifference(b);
	

	///*Set c(a.calcUnion(b));
	//c.print();*/
	//Set d (a.calcInterSection(b));
	//d.print();
}
