#include<iostream>
#include"Time.h"
using namespace std;





int main()
{  
	Time a(1, 1, 1);
	Time * p = new Time[4]{ Time(1,1,1),a };




	return 0;

}
