#ifndef SET_H
#define SET_H




struct Set
{
	int * data;
	int capacity;
	int noOfElements;
};

void createSet(Set & s, int n);
bool addElement(Set & s, int element);
void reSize(Set & b, int newSize);
void displaySet(Set s);
void deallocateSet(Set & a);
bool removeElement(Set &, int element);
int searchElementPosition(Set a, int element);
bool isEmpty(Set a);
int searchElement(Set, int element);
Set calcUnion(Set a, Set b);
Set creatClone(Set & source);            // 1 2 3 4 5           2 0 4 10      1 4   
Set intersection(Set a, Set b);
void reSize(Set & a, int newSize);
bool removeElement(Set & s, int element);

void displayPowerSet(Set a);












#endif
