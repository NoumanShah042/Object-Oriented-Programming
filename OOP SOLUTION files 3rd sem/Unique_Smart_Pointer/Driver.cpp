#include<iostream>
using namespace std;
#include"UniqueSmartPointer.h"
//#include"Array.h"
int main()
{
	
	
	UniqueSmartPointer<int> usp1(new int(34));
	UniqueSmartPointer<int> usp2(new int(54));
	cout << *usp1<<":"<< *usp2 << '\n';
	//usp1.reset(new int(34));
	usp1.swap(usp2);
	cout << *usp1 << ":" << *usp2 << '\n';


	//UniqueSmartPointer<int[]> a;
	
	cout << "\nbye\n";

	// array usp1 & usp2
	/*Array<int> a;
	UniqueSmartPointer<Array<int> > usp1(&a);
	Array<int> b;
	UniqueSmartPointer<Array<int> > usp2(&b);
	cout << usp1->getSize();
	
	usp1->resize(3);
	for (int i = 0; i < 3; i++)
	{
		cin >> usp1->operator[](i);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << usp1->operator[](i);
	}

	usp2->resize(3);
	for (int i = 0; i < 3; i++)
	{
		cin >> usp2->operator[](i);
	}
	for (int i = 0; i < 3; i++)
	{
		cout << usp2->operator[](i);
	}
	//usp1.reset();
	cout << endl;
	usp1 = usp2;
	for (int i = 0; i < 3; i++)
	{
		cout << usp1->operator[](i);
	}
	*/



	/*UniqueSmartPointer<int> usp1(new int(34));
	UniqueSmartPointer<int> usp2(new int(56));

	cout << *usp1<<":"<< *usp2;
	usp1.swap(usp2);*/
	
	


	// reset no error for int 
	/*	UniqueSmartPointer<int> usp1(new int(34));
	
	cout << *usp1;
	usp1.reset(new int(7884));
	cout << *usp1;*/



	//for array
	/*
	Array<int> a;
	UniqueSmartPointer<Array<int> > usp1(&a);
	cout<<usp1->getSize();
	usp1->resize(3);
	for (int i = 0; i < 3; i++)
	{
		cin >> usp1->operator[](i);
	}
	for (int i = 0; i < 3; i++)
	{
		cout<< usp1->operator[](i);
	}

	 usp1.ptr->~Array();*/
	

	//usp1.reset(new Array<int>);

	/*UniqueSmartPointer<int> usp1(new int(34));
	cout<< *(usp1.get())<<'\n';
	cout << *usp1;*/

	return 0;
}