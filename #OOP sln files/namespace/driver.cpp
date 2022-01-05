#include<iostream>

using namespace std;

namespace A
{

	struct Delta
	{
		int x;
		int y;

	};
}

//using namespace A;

void wow()
{
	A::Delta d = { 1,2 };
    cout << d.x;
}

int main()
{
	A::Delta t = { 15,20 };
	cout << (t.x=4) << endl;
	cout << t.x << endl;
	wow();
	return 0;
}
