#ifndef C_UNIQUE_RANDOM_H
#define  C_UNIQUE_RANDOM_H
#include"CRandom.h"



class CUniqueRandom:public CRandom
{
public:
	int getRandomNumber(int lower, int upper) override;
};


#endif