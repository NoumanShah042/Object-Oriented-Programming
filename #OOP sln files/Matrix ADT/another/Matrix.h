#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
	int **data;
	int rows;
	int columns;

public:
	//void resize(int newRow, int newCol);
	Matrix();
	Matrix(int r, int c);
	~Matrix();
	void display();
	void getInput();
	bool isSymmetric();
	Matrix Transpose();
	//Matrix multiply(Matrix m2);

	Matrix operator+(Matrix mat);
	Matrix operator-(Matrix mat);
	Matrix operator*(Matrix mat);

	bool isEqual(Matrix m2);
	Matrix(const Matrix &);
	Matrix & operator=(const Matrix &);

	bool isValidIndex(int r, int c);
	int & at(int r, int c);
	int getRows();
	int getColumns();
	

};

#endif