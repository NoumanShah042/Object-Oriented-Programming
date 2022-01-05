#include<iostream>
#include"Matrix.h"
#include"SMatrix.h"
using namespace std;

//      SMatrix::
SMatrix::~SMatrix()     
{
	order = 0;
	cout << "\n~SMatrix()\n";
}

SMatrix::SMatrix(SMatrix && ref):Matrix(move(ref))
{
	order = ref.order;
}
SMatrix& SMatrix::operator=(SMatrix && ref)
{
	//this->~SMatrix();     automatically call  in Matrix::operator=
	cout << "\noperator=(SMatrix && ref)\n";
	Matrix::operator=(ref);
	order = ref.order;
	ref.order = 0;
	return *this;
}
SMatrix::SMatrix(const Matrix & ref) : Matrix(ref)           //   for the function which return matrix, this constructor execute and makes Smatrix from this .
{
	
	order = ref.getRows();
}

SMatrix::SMatrix():Matrix()
{
	order = 0;
}

SMatrix::SMatrix(int order): Matrix(order,order)
{
	this->order = order;
}

SMatrix::SMatrix(const SMatrix & ref):Matrix(ref)
{
	cout << "\nSMatrix(const SMatrix & ref)\n";
	order = ref.order;
}

SMatrix& SMatrix::operator=(const SMatrix & ref)
{
	if (&ref == this)
	{
		return *this;
	}

	order = ref.order;
	Matrix::operator=(ref);

	return *this;
}

int SMatrix::getOrder()
{
	return order;
}
