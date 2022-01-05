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

Matrix & Matrix::operator=(Matrix && ref)
{
	this->~Matrix();
	data = ref.data;
	rows = ref.rows;
	columns = ref.columns;
	ref.data = nullptr;
	ref.rows = 0;
	ref.columns = 0;

	return *this;
}
Matrix::Matrix(Matrix && ref)
{

	data = ref.data;
	rows = ref.rows;
	columns = ref.columns;
	ref.data = nullptr;
	ref.rows = 0;
	ref.columns = 0;
}

Matrix Matrix::operator+(const Matrix & ref)
{
	Matrix a(rows,columns);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			a.data[i][j] = data[i][j] + ref.data[i][j];
		}
	}

	return a;
}
const double &  Matrix::at(int r, int c) const
{
	if (isValidIndex(r, c))
	{
		return data[r][c];
	}

	exit(0);
}

bool Matrix::isSymmetric()
{
	     Matrix a =  Transpose();

		return isEqual(a);

}
Matrix Matrix::Transpose() const
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
void Matrix::resize(int newRow, int newCol)
{
		Matrix a(newRow, newCol);
	for (int i = 0; i < (newRow > rows ? rows : newRow); i++)    //(newRow>rows?rows: newRow)
	{
		for (int j = 0 ; j < (newCol > columns ? columns : newCol); j++)      //(newCol > columns ? columns : newCol)
		{
			a.data[i][j] = data[i][j];
		}
	}

	this-> ~Matrix();
	data = a.data;
	a.data = nullptr;
	rows = newRow;
	columns = newCol;
}
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
void Matrix::display() const
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
	if (&ref == this)
	{
		return *this;
	}

	this->~Matrix();
	rows = ref.rows;
	columns = ref.columns;
	if (!ref.data)
	{
		data = nullptr;
		return *this;
	}
	data = new double *[rows];
	for (int i = 0; i < rows; i++)
	{
		data[i] = new double[columns];
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
	data = new double * [rows];
	for (int i = 0 ; i < rows ; i++)
	{
		data[i] = new double[columns];
		for (int j = 0; j < columns ; j++)
		{
			data[i][j] = ref.data[i][j];
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
	data = new double * [r];
	for (int i = 0; i < r ; i++)
	{
		data[i] = new double [c];
		for (int j = 0; j < c; j++)
		{
			data[i][j] = 0;
		}
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
int Matrix::getRows()const
{
	return rows;

}
int Matrix::getColumns()const
{
	return columns;

}
bool Matrix::isValidIndex(int r, int c) const
{
	if ((r >= 0 && r < rows) && (c >= 0 && c < columns))
	{
		return 1;
	}
	return 0;
}
double & Matrix::at(int r, int c)
{
	if (isValidIndex(r, c))
	{
		return data[r][c];
	}
	
	exit(0);

}







