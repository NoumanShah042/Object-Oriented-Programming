#include<iostream>
using namespace std;

#include"Matrix.h"

void explore(Matrix & m, int r, int c)
{

	m.at(r, c) = 10;

	if (c + 1 < m.getColumns() && m.at(r, c + 1) == 0)
	{
		explore(m, r, c + 1);
	}
	if (c - 1 >= 0 && m.at(r, c - 1) == 0)
	{
		explore(m, r, c + 1);
	}

	if (r + 1 < m.getRows() && m.at(r + 1, c) == 0)
	{
		explore(m, r + 1, c);
	}
	if (r - 1 >= 0 && m.at(r - 1, c) == 0)
	{
		explore(m, r - 1, c);
	}
}

//class Matrix {
//
//	int** data;
//	int row;
//	int column;
//public:
//	Matrix();
//	Matrix(const Matrix & ref)
////	Matrix(int rows, int columns);
//	void getInput();
//	void display();
//	Matrix operator+(Matrix mat);
//	Matrix operator-(Matrix mat);
//	Matrix operator*(Matrix mat);
//	~Matrix();
//
//};
//
//Matrix::~Matrix()
//{
//	for (int i = 0; i < row; i++)
//	{
//		delete[] data[i];
//	}
//	delete[] data;
//	data = nullptr;
//	row = 0;
//	column = 0;
//}
//Matrix::Matrix()
//{
//	row = 0;
//	column = 0;
//	data = nullptr;
//}
//Matrix::Matrix(int rows, int columns)
//{
//	row = rows;
//	column = columns;
//	data = new int*[row];
//	for (int i = 0; i < row; i++)
//	{
//		data[i] = new int[column];
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < column; j++)
//		{
//			data[i][j] = 0;
//		}
//	}
//}
//void Matrix::getInput()
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < column; j++)
//		{
//			cin >> data[i][j];
//		}
//	}
//}
//void Matrix::display()
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < column; j++)
//		{
//			cout << data[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//Matrix Matrix::operator+(Matrix mat)
//{
//	Matrix c(mat.row, mat.column);
//	for (int i = 0; i < c.row; i++)
//	{
//		for (int j = 0; j < c.column; j++)
//		{
//			c.data[i][j] = data[i][j] + mat.data[i][j];
//		}
//	}
//	return c;
//}
//Matrix Matrix::operator-(Matrix mat)
//{
//	Matrix c(mat.row, mat.column);
//	for (int i = 0; i < c.row; i++)
//	{
//		for (int j = 0; j < c.column; j++)
//		{
//			c.data[i][j] = data[i][j] - mat.data[i][j];
//		}
//	}
//	return c;
//}
//Matrix Matrix::operator*(Matrix mat)
//{
//	Matrix c(row, mat.column);
//	int sum;
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < mat.column; j++)
//		{
//			sum = 0;
//			for (int k = 0; k < column; k++)
//			{
//				sum += data[i][k] * mat.data[k][j];
//			}
//			c.data[i][j] = sum;
//		}
//	}
//	return c;
//}
//

int main()
{


	Matrix m(5, 5);



	for (int i = 1; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			m.at(i, j) = 1;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		m.at(0, i) = 0;
		m.at(i, 0) = 0;

	}

	m.display();
	cout << endl;
	explore(m, 2, 0);
	m.display();
	return 0;
}

/*

*/