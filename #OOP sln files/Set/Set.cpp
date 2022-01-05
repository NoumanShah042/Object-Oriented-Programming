#include"Set.h"
#include<iostream>
using namespace std;

//
//if (counter & (1 << j))
//cout << set[j];

//
//void displayPowerSet(Set a)
//{
//	int size = 8;
//	for (int i = 0 ; i < 8 ; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			if()
//
//			cout << a.data[j];
//
//			/*
//			 if(i & (1<<j))
//			cout << a.data[j];*/
//		}
//		cout << endl;
//	}
//}




bool addElement(Set & s, int element)
{
	if (s.capacity == s.noOfElements)
	{
	
		return false;
		
	}

	s.data[s.noOfElements] = element;
	s.noOfElements = s.noOfElements + 1;
	return true;

}

bool removeElement(Set & s, int element)          //  1 2 3 4 5  
{
	int index = searchElement(s, element);
	s.data[index] = s.data[s.noOfElements - 1];
	s.noOfElements = s.noOfElements - 1;
	return true;
}
Set intersection(Set a, Set b)
{
	Set intersection1;
	createSet(intersection1, a.capacity + b.capacity);


	for (int i = 0; i < a.noOfElements; i++)
	{
		for (int j = 0; j < b.noOfElements; j++)
		{
			if (a.data[i] == b.data[j])
			{
				addElement(intersection1, a.data[i]);
			}
		}
	}

	return intersection1;

	/*
		for (int i = 0 ; i < a.noOfElements ; i++)
		{
			for (int j = 0; j < b.noOfElements; j++)
			{
				if (a.data[i] == b.data[j])
				{
					addElement(intersection1, a.data[j]);
					//intersection1.data[i] = b.data[j];
				}

			//return intersection1;
			}
		}
		*/

}

void reSize(Set &  b , int newSize)
{
	Set q;
	createSet( q, 10);
//	
	
	for (int i = 0; i < b.noOfElements; i++)
	{
		
		addElement( q , b.data[i] );
		
		
	}

	b.data = q.data;
	b.capacity = q.capacity;
	b.noOfElements = q.noOfElements;
	

	q.data = nullptr;
	q.capacity = 0;
	q.noOfElements = 0;
	
	
	
	
	/*
	deallocateSet(a);
	a.data = new int[newSize];*/
}



Set creatClone(Set & source)
{
	Set clone = source;
	clone.data = new int[clone.capacity];

	for (int i = 0; i < clone.capacity; i++)
	{
		clone.data[i] = source.data[i];
	}

	return clone;
}
int searchElement(Set s, int element)
{
	int index;
	for (int i = 0; i < s.noOfElements; i++)
	{
		if (s.data[i] == element)
		{
			index = i;
			return index;
		}
	}

	deallocateSet(s);

}
void deallocateSet(Set & a)
{
	if (!a.data)
		return;

	delete a.data;
	a.data = nullptr;

}
Set calcUnion(Set a, Set b)
{
	Set Union;
	createSet(Union, a.noOfElements + b.noOfElements);
	for (int i = 0; i < a.noOfElements; i++)
	{
		addElement(Union, a.data[i]);

	}
	for (int i = 0; i < b.noOfElements; i++)
	{
		if (Union.data[i] != b.data[i])
		{
			addElement(Union, b.data[i]);
		}

	}
	deallocateSet(a);
	deallocateSet(b);
	return  Union;

}
bool isEmpty(Set a)
{
	if (a.capacity == a.noOfElements)
	{
		return false;
	}
	else
	{
		return true;
	}

	deallocateSet(a);
}
int searchElementPosition(Set a, int element)
{
	int position = 0;
	for (int i = 0; i < a.noOfElements; i++)
	{
		position = position + 1;
		if (a.data[i] == element)
		{
			return position;
		}

	}
}
void createSet(Set & s, int n)
{
	s.capacity = n;
	s.noOfElements = 0;
	s.data = new int[s.capacity];

}
void displaySet(Set s)
{
	cout << "{";
	for (int i = 0; i < s.noOfElements; i++)
	{
		cout << s.data[i];
		if (i != s.noOfElements - 1)
		{
			cout << ",";
		}
	}
	cout << "}";

	deallocateSet(s);
}

