#ifndef SMATRIX_H
#define SMATRIX_H



class SMatrix
{
	
	SMatrix(const Matrix & ref) : m(ref)
	{
		order = ref.getRows();
	}
	Matrix m;
	int order;
	
public :
	
	SMatrix(int ord):m(ord,ord)
	{
		order = ord;

	}
	double  &  at(int row, int col);
	int getOrder();
	void display() const;
	void resize(int ord);
	SMatrix Transpose() const;
		

};







#endif
