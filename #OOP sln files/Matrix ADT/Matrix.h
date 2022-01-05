#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
	double **data;
	int rows;
	int columns;

public:
	void resize(int newRow, int newCol);
	
	bool isSymmetric();
	Matrix Transpose();
	Matrix multiply(Matrix m2);
	bool isEqual(Matrix m2);
	Matrix(const Matrix &);
	bool isValidIndex(int r, int c);
	double & at(int r, int c);
	int getRows();
	int getColumns();
	Matrix();
	Matrix(int r, int c);
	~Matrix();
	void display();

};

#endif