#include<iostream>
using namespace std;

enum Season 
{
	null, Summer=3, Rainy=-5, Autumn, Winter, Spring,a,d,f,g
};

enum colors {
	Jan, Feb, Mar, Apr, May, Jun, Jul,
	Aug, Sep, Oct, Nov, Dec
};

int main()
{
	Season g = Autumn;
	cout << g<<endl;
	for (int i = Jan; i <= Dec; i++)
	{
		cout << i << ",";
	}


	/*cout << endl << endl << endl;
	Season season;
	cout << "What is your favorite season\n"
		"  1.Summer\n"
		"  2.Rainy\n"
		"  3.Autumn\n"
		"  4.Winter\n"
		"  5.Spring\n"
		"> ";
	int ch;
	cin >> ch;
	switch (ch)*/
	/*{
	case 1:
		season = Summer;
		break;
	case 2:
		season = Rainy;
		break;
	case 3:
		season = Autumn;
		break;
	case 4:
		season = Winter;
		break;
	case 5:
		season = Spring;
		break;
	default:
		season = null;
	}
	if (season == null)
		cout << "Hey, that's not a fruit!\n";
	else
		cout << "That's my favourite too'!\n";*/

	return 0;
}



