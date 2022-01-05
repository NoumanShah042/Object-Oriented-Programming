#include <iostream>
using namespace std;
#include"CRandom.h"
#include<ctime>

//     CRandom::

 int  CRandom::getRandomNumber(int lower, int upper)
{
	
	 return  (rand() % (upper - lower + 1) + lower);
	 
}


Array  CRandom::getRandomSequence(int lower, int upper, int seqSize)
{
	Array a(seqSize);
	srand(time(0));
	int count = 0;

	int noOfElements = 0;
	while(noOfElements != seqSize)
	{
		int d= getRandomNumber(lower, upper);
		for (int i = 0; i < noOfElements; i++)
		{
			//if((upper - lower)< seqSize)
			if (a[i] == d)
			{
				count = count + 1;
			}
			
		
	    }
		///cout << noOfElements << endl;
		if (count == 0)
		{
			a[noOfElements] = d;
			
			count =0;
			noOfElements = noOfElements + 1;
		}
		count = 0;

	}
	


	//without same
	//for (int i = 0; i < seqSize; i++)
	//{
	//	int d = getRandomNumber(lower, upper);
	//	a[i] = d;
	//}
	for (int i = 0; i < seqSize; i++)
	{

		cout << a[i] << ",";
	}

	return a;
}
