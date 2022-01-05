#include<iostream>
using namespace std;






class Animal
{
	int c = 80;
public:
	Animal()
	{

	}
	virtual void speak()
	{
		cout << "\nvirtual void speak()\n";
	}
};

class Cat :public Animal
{
public:
	int a = 90;
	virtual void f()
	{
		cout << "Cat::f()\n";
	}
	void speak()
	{
		cout << "\nMeeaauun\n";

	}

};

class Goat :public Animal
{
public:
	void speak()
	{
		cout << "\nMaaaaaaaaaa\n";

	}

};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "\nBaoo Baaaaaaoooo\n";

	}

};
class Rat :public Animal
{
public:
	void speak()
	{
		cout << "\nchi en eeeeen\n";

	}

};

typedef void(*function)(void);
int main()
{
	/*Animal**p = new Animal*[5];

	p[0] = new Cat;
	p[1] = new Rat;
	p[2] = new Dog;
	p[3] = new Goat;
	p[3]->speak();
	(*(p + 2))->speak();
	return 0;*/
	function a;
	Animal obj;

	//cout << *((int *)&obj1 + 1));
	cout << *((int*)(&obj) + 1)<<endl;

	a = (function)*((int*)*((int*)(&obj) + 0));
	a();
	cout << "\n@@@@@@@@@@@@@@@@@@\n";

	Cat obj1;

	a = (function)*((int*)*(int*)(&obj1) + 0);
	a();
	a = (function)*((int*)*((int*)(&obj1)) + 1);
	a();

	//cout<<*(int *)(&obj + 1)<<endl;
	

		return 0;
}







/*

enum EnumType { Cat, Dog, Rat ,Goat};

class Animal
{
public:

	Animal(EnumType type)
	{
		animalType = type;
	}
	void speak();
private:
	EnumType animalType;
};

void Animal::speak()
{
	switch (animalType)
	{

	case Cat:
	{
		cout << "\nMeeaauun\n";
		break;
	}
	case Rat:
	{
		cout << "\nchi en eeeeen\n";
		break;
	}
	case Dog:
	{

		cout << "\nBaoo Baaaaaoooo\n";
		break;
	}

	case Goat:
	{
		cout << "\nMaaaaaaaaaaaaaaaa\n";
		break;
	}
	}
}
int main()
{

	Animal  a(Goat);
	a.speak();

	return 0;
}*/