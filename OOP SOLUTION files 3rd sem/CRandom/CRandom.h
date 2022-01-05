#ifndef C_RANDOM_H
#define C_RANDOM_H
#include"Array.h"


class CRandom
{
public:

	virtual Array getRandomSequence(int lower, int upper, int seqSize = 0);
	 virtual int getRandomNumber(int lower, int upper);

};


#endif