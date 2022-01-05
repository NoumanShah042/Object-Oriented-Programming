#include<iostream>
using namespace std;

struct Set
{
	int * data;
	int capacity;
	int noOfElements;
};

void createSet(Set & s, int n);

bool addElement(Set & s, int element);
void reSize(Set &, int newSize); 
void displaySet(Set s);
void deallocateSet(Set & a);
bool removeElement(Set &, int element);
int searchElementPosition(Set a, int element);
bool isEmpty(Set a);
int searchElement(Set, int element);
Set calcUnion(Set a, Set b);
Set creatClone ( Set & source );            // 1 2 3 4 5           2 0 4 10      1 4   
Set intersection(Set a, Set b);
void reSize(Set & a, int newSize);
bool removeElement(Set & s, int element);


 
int main()
{
	Set a,b;
	
	createSet(b, 5);
	createSet(a,5);

	addElement(a,2);
	addElement(a,5);
	addElement(a,4);
	addElement(a,9);
	
	 
	displaySet(creatClone(a));
	cout << endl;
	reSize(a, 2);
	displaySet(creatClone(a));
	cout << endl;

	//cout<<searchElementPosition(a, 5);
	intersection(creatClone(a), creatClone(b));
	removeElement(a,2);
	displaySet(creatClone(a));
	cout << endl;
	
	cout << endl;
	addElement(b,1);
	addElement(b,4);
	addElement(b,11);
	addElement(b,6);

	
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
void reSize(Set & a, int newSize)
{
	deallocateSet(a);
	a.data = new int[newSize];
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
void createSet(Set & s, int n)
{
	 s.capacity = n;
	 s.noOfElements = 0;
	 s.data = new int [s.capacity];
	 
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

