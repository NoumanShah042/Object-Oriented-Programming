#include <iostream>
#include<fstream>

using namespace std;



int main()
{

	//char arr[100];
	//cin.getline(arr, 100);

	//cout << "hello";
	ofstream ofs;
	ofs.open("abc.txt");
	ofs << "hello";

	//ofs << arr;
	ofs.close();
	cout << "\nfile write op complete\n";

	

	ifstream obj;
	obj.open("test.txt");
	char s[10];
	obj.getline(s, 10);
	//cout << s << endl;
	cout<<obj.rdbuf();
	obj.close();
	return 0;
}











/*
struct   Rational
{
	int numerator;
	int denominator;

};

void inputRational(Rational &);
void printRational(Rational);
Rational addRational(Rational a, Rational b);
Rational diffRational(Rational a, Rational b);
Rational divRational(Rational a, Rational b);
void reduce(Rational * a);

int main()
{
	Rational r,s;
	inputRational(r);
	printRational(r);
	cout << '\n';
	inputRational(s);
	printRational(s);
	cout << '\n';
	cout << '\n';

	Rational res = diffRational(r, s);
	cout << res.numerator << "/" << res.denominator << '\n';
	//reduce(&r);
	//cout << r.numerator << "/" << r.denominator << '\n';
	

	/*FullName info;
	strcpy(info.firstName, "Syed");
	strcpy(info.middleName, "Nouman");
	strcpy(info.lastName, "Rehman");

	Rational result = addRational(r, s);
	cout << result.numerator << "/" << result.denominator << '\n';

	cout<< info.firstName << " " << info.middleName << " " << info.lastName << '\n';



	return 0;
}


void inputRational(Rational & r)
{
	cout << "enter numerator :";
	cin >> r.numerator;

	cout << "enter denominator :";
	cin>> r.denominator;
}
void printRational(Rational r)
{
	cout << r.numerator << "/" << r.denominator<<'\n';
}
Rational addRational(Rational a, Rational b)
{
	Rational result;
	result.numerator = a.numerator*b.denominator + b.numerator*a.denominator;
	result.denominator = a.denominator* b.denominator;

	reduce(&result);
	return result;
}
Rational diffRational(Rational a, Rational b)
{

	Rational result;
	result.numerator = a.numerator*b.denominator - b.numerator*a.denominator;
	result.denominator = a.denominator* b.denominator;

	
		reduce(&result);
		return result;
	
}
Rational divRational(Rational a, Rational b)
{

	Rational result;
	result.numerator = a.numerator*b.denominator;
	result.denominator = a.denominator* b.numerator;
	reduce(&result);
	return result;


}
void reduce(Rational * a)
{

	if ((*a).numerator == 0);
	
	else
	{
		int i, gcd;
		for (i = 1; i <= abs((*a).numerator) && i <= abs((*a).denominator); i++)
		{
			if ((*a).numerator % i == 0 && (*a).denominator % i == 0)
				gcd = i;
		}
		(*a).numerator = (*a).numerator / gcd;
		(*a).denominator = (*a).denominator / gcd;
	}
	
	
}


*/