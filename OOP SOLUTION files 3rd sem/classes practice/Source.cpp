#include<iostream>
using namespace std;

class Rectangle
{
	float length;
	float width;

public:

	float getLength();
	float getwidth();
	void  setWidth(float w);
	void  setLength(float l);
	float calArea(float l, float w);
	float calPerimeter(float l, float w);
	bool  isSquare(float l, float w);
};


int main()
{
	Rectangle a;
	a.setLength(5);
	a.setWidth(5);
	cout << a.calPerimeter(a.getLength(), a.getwidth())<<'\n';
	cout << a.calArea(a.getLength(), a.getwidth())<<'\n';
	cout<<a.isSquare(a.getLength(), a.getwidth())<<'\n';
	
	
	return 0;

}


float Rectangle::calArea(float l, float w)
{
	return  l * w;

}
float Rectangle::calPerimeter(float l, float w)
{
	return  2 * (l + w);

}
void  Rectangle::setLength(float l)
{
	if (l >= 0)
	{
		length = l;
	}
}
void  Rectangle::setWidth(float w)
{
	if (w >= 0)
	{
		width = w;
	}
}
float Rectangle::getwidth()
{
	return width;
}
float Rectangle::getLength()
{
	return length;
}
bool  Rectangle::isSquare(float l, float w)
{
	return  (l == w) ? true : false;

}