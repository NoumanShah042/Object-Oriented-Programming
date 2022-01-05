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
	Matrix(Matrix && ref);
	Matrix & operator=(Matrix && ref);
	Matrix & operator=(const Matrix & ref);
	double & at(int r, int c);
	const double & at(int r, int c) const;
	int getRows() const ;
	int getColumns() const;
	void resize(int newRow, int newCol);
	bool isSymmetric();
	Matrix Transpose() const;
	//Matrix multiply(Matrix m2);
	Matrix operator+(const Matrix & ref);
	bool isEqual(Matrix m2);
	bool isValidIndex(int r, int c) const;
	
	
	void display() const;

};

#endif