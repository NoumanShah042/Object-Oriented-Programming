
#include <iostream>
using namespace std;
#include"CUniqueRandom.h"




int  CUniqueRandom::getRandomNumber(int lower, int upper)
{

	int d = (rand() % (upper - lower + 1) + lower);
	return d;
}