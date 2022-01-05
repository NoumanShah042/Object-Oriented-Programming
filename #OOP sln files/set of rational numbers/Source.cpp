#include<iostream>
using namespace std;

struct Rational
{
	int numerator;
	int denominator;

};
struct Set
{
	Rational * data;
	int capacity;
	int noOfElements;
};

void createSet(Set & s, int n);
bool addElement(Set & s, Rational element);

bool isRationalEqual(Rational a, Rational b)
{
	return  (a.numerator == b.numerator && a.denominator == b.denominator);

}
bool addElement(Set & s, Rational element)
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
	if (n <= 0)
	{
		s.capacity = 0;
		s.noOfElements = 0;
		s.data = nullptr;
		return;
	}
	s.capacity = n;
	s.noOfElements = 0;
	s.data = new Rational[s.capacity];

}
int searchElementPosition(Set s, Rational element)
{
	int i = 0;
	if (i < s.noOfElements && !isRationalEqual(element, s.data[i]))
	{
		i = i + 1;
	}
	int ans;
	if (i == s.noOfElements)
		ans = -1;
	else
		ans = i;
	return ans;

}


bool displaySet(Set s)
{
	cout << "{ ";
	for (int i = 0; i < s.noOfElements; i++)
	{

		cout << s.data[i].numerator << "/" << s.data[i].denominator;
		cout << i;
		(i < s.noOfElements - 1) ? cout << " , " : cout << " }";

	}

	return true;
}

int main()
{
	Set a, b;
	createSet(a, 3);
	Rational num[3];
	for (int i = 0; i < 3; i++)
	{

		cin >> num[i].numerator;
		cin >> num[i].denominator;
		addElement(a, num[i]);
		cout << a.data[i].numerator << "/" << a.data[i].denominator << endl;


	}
	cout << a.noOfElements << endl;
	displaySet(a);





}

