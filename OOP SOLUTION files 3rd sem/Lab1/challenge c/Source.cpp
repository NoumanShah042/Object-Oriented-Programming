#include<iostream>
using namespace std;



struct Line
{
	float a;
	float b;
	float c;
};



void checkVertical(Line l)
{
	cout << -l.a / l.b;

}




float slope(Line l)
{
	return -l.a / l.b;

}

bool isEqual(Line l1, Line l2)
{
	if (l1.a==l2.a && l1.b==l2.b && l1.c==l2.c)
	{
		return true;

	}
	return false;
}

bool isParallel(Line a, Line b)
{
	if (slope(a) == slope(b))
	{
		return true;

	}
	return false;
}

bool isPerpendicular(Line l1, Line l2)
{
	if (slope(l1)*slope(l2)==-1  || ( l1.a==0 && l2.b==0  )  )
	{
		return true;

	}
	return false;
}

int main()
{
	Line l1, l2;
	l1.a = 2;
	l1.b = 3;
	l1.c = 2;
	l2.a = 2;
	l2.b = 3;
	l2.c = 4;
	
	//takevaluesofLine(l1);
	//takevaluesofLine(l2);
	cout<<slope(l1)<<'\n';
	cout << isParallel(l1, l2);
}


	