#ifndef SMATRIX_H
#define SMATRIX_H
#include"Matrix.h"

//    square matric  by Inheritance

class SMatrix:public Matrix  
{
	int order;    // when i make object of SMatrix i also initialize the members of class  Matrix 

public:
	
	SMatrix();
	SMatrix(int order);
	SMatrix(const SMatrix & ref);    // copy constructor
	SMatrix(SMatrix && ref);    // move constructor
	SMatrix& operator=(const SMatrix & ref);//copy assignment
	SMatrix& operator=(SMatrix && ref);    // move assignment
	int getOrder();
	SMatrix(const Matrix & ref);         //   for the function which return matrix, this constructor execute and makes Smatrix from this .
	~SMatrix();

};







#endif
