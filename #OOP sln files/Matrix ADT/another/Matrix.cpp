#include<iostream>
#include"Matrix.h"
using namespace std;

//Matrix Matrix::multiply(Matrix m2)
//{
//	Matrix a(rows,columns);
//	
//
//
//}



Matrix Matrix::operator*(Matrix mat)
{
	Matrix c(rows, mat.columns);
	int sum;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < mat.columns; j++)
		{
			sum = 0;
			for (int k = 0; k < columns; k++)
			{
				sum += data[i][k] * mat.data[k][j];
			}
			c.data[i][j] = sum;
		}
	}
	return c;
}

Matrix Matrix::operator-(Matrix mat)
{
	Matrix c(mat.rows, mat.columns);
	for (int i = 0; i < c.rows; i++)
	{
		for (int j = 0; j < c.columns; j++)
		{
			c.data[i][j] = data[i][j] - mat.data[i][j];
		}
	}
	return c;
}

Matrix Matrix::operator+(Matrix mat)
{
	Matrix c(mat.rows, mat.columns);
	for (int i = 0; i < c.rows; i++)
	{
		for (int j = 0; j < c.columns; j++)
		{
			c.data[i][j] = data[i][j] + mat.data[i][j];
		}
	}
	return c;
}


bool Matrix::isSymmetric()
{
	     Matrix a =  Transpose();

		return isEqual(a);

}


Matrix Matrix::Transpose()
{
	Matrix a(columns,rows);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			a.data[j][i] = data[i][j];
		}
	}
	 
	return a;
}

//void  Matrix::resize(int newRow, int newCol)
//{
//
//
//
//	Matrix a(newRow, newCol);
//	for (int i = 0; i < (newRow>rows?rows: newRow); i++)
//	{
//		for (int j = 0; j < (newCol > columns ? columns :newCol); j++)
//
//		{
//			a.data[i][j] = data[i][j];
//		}
//
//	}
//
//	data=a.
//
//
//
//}
bool Matrix::isEqual(Matrix m2)
{
	if ((rows != m2.rows) || (columns != m2.columns))
		return false;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (data[i][j] != m2.data[i][j])
			{
				return false;
			}
		}
	}
	return true;
}
Matrix::Matrix()
{
	rows = 0;
	columns = 0;
	data = nullptr;
}

void Matrix::display()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0 ; j < columns ; j++)
		{
			cout << data[i][j]<<"  ";
		}
		cout << '\n';
	}
}

Matrix & Matrix::operator=(const Matrix & ref)
{
	if (ref.data==nullptr)
	{
		return *this;
	}

	this->~Matrix();

	data = new int *[ref.rows];
	rows = ref.rows;
	columns = ref.columns;
	for (int i = 0; i <rows; i++)
	{
		data[i] = new int[columns];
		for (int j = 0; j < columns; j++)
		{
			data[i][j] = ref.data[i][j];
		}
	}
	return *this;

}
Matrix::Matrix(const Matrix & ref)
{
	rows = ref.rows;
	columns = ref.columns;
	if (!ref.data)
	{
		data = nullptr;
		return;
	}
	data = new int *[rows];
	for (int i = 0 ; i < rows ; i++)
	{
		data[i] = new int[columns];
		for (int j = 0; j < columns; j++)
		{
			data[i][j] = ref.data[i][j];
		}
	}

	/*for (int i = 0; i < rows; i++)
	{

	}*/
	
}

void Matrix::getInput()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cin >> data[i][j];
		}
	}
}

Matrix::Matrix(int r, int c)
{
	if (r <= 0 && c <= 0)
	{
		rows = 0;
		columns = 0;
		data = nullptr;
		return;
	}

	rows = r;
	columns = c;
	data = new int * [r];
	for (int i = 0; i < r ; i++)
	{
		data[i] = new int [c];
	}

}

Matrix::~Matrix()
{
	if (!data)
	{
		return;
	}

	for (int i = 0 ; i < rows ; i++)
	{
		delete[] data[i] ;
	}

	delete data;
	data = nullptr;
	columns = 0;
	rows = 0;

}
int Matrix::getRows()
{
	return rows;

}
int Matrix::getColumns()
{
	return columns;

}
bool Matrix::isValidIndex(int r, int c) 
{
	if ((r >= 0 && r < rows) && (c >= 0 && c < columns))
	{
		return 1;
	}
	return 0;
}
int & Matrix::at(int r, int c)
{
	if (isValidIndex(r, c))
	{
		return data[r][c];
	}
	
	exit(0);

}







