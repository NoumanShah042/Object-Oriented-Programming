#include<iostream>
#include"Matrix.h"
#include"SMatrix.h"
using namespace std;

//      SMatrix::

double  &   SMatrix::at(int row, int col)
{
	return	m.at(row, col);
}

int SMatrix::getOrder()
{
	return m.getRows();
}

void  SMatrix::display() const
{
	m.display();

}

void SMatrix::resize(int ord)
{
	m.resize(ord, ord);
}
SMatrix SMatrix::Transpose() const
{
	return  m.Transpose();
}






