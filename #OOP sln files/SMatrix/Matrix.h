#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
	double **data;
	int rows;
	int columns;

public:

	Matrix();
	Matrix(int r, int c);
	~Matrix();
	Matrix(const Matrix &);
	double & at(int r, int c);
	const double & at(int r, int c) const;
	int getRows() const ;
	int getColumns() const;
	void resize(int newRow, int newCol);
	bool isSymmetric();
	Matrix Transpose() const;
	//Matrix multiply(Matrix m2);
	bool isEqual(Matrix m2);
	bool isValidIndex(int r, int c) const;
	
	
	void display() const;

};

#endif