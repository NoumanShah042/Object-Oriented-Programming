#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>
using namespace std;


template<typename T>
class Matrix
{
	T **data;
	int rows;
	int columns;

public:


	const T &  at(int r, int c) const
	{
		if (isValidIndex(r, c))
		{
			return data[r][c];
		}

		exit(0);
	}

	bool isSymmetric()
	{
		Matrix<T> a = Transpose();

		return isEqual(a);

	}
	Matrix<T> Transpose() const
	{
		Matrix<T> a(columns, rows);
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				a.data[j][i] = data[i][j];
			}
		}

		return a;
	}
	void  resize(int newRow, int newCol)
	{



		Matrix<T> a(newRow, newCol);
		for (int i = 0; i < (newRow > rows ? rows : newRow); i++)    //(newRow>rows?rows: newRow)
		{
			for (int j = 0; j < (newCol > columns ? columns : newCol); j++)      //(newCol > columns ? columns : newCol)
			{
				a.data[i][j] = data[i][j];

			}

		}

		//return a;

		this-> ~Matrix();
		data = a.data;
		a.data = nullptr;
		rows = newRow;

		columns = newCol;


	}
	bool  isEqual(Matrix<T> m2)
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
	 Matrix()
	{
		rows = 0;
		columns = 0;
		data = nullptr;
	}
	void  display() const
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < columns; j++)
			{
				cout << data[i][j] << "  ";
			}
			cout << '\n';
		}
	}
	Matrix(const Matrix<T> & ref)
	{
		rows = ref.rows;
		columns = ref.columns;
		if (!ref.data)
		{
			data = nullptr;
			return;
		}
		data = new T *[rows];
		for (int i = 0; i < rows; i++)
		{
			data[i] = new T[columns];
			for (int j = 0; j < columns; j++)
			{
				data[i][j] = ref.data[i][j];
			}
		}



	}
	 Matrix(int r, int c)
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
		data = new T *[r];
		for (int i = 0; i < r; i++)
		{
			data[i] = new T[c];
			/*for (int j = 0; j < c; j++)
			{
				data[i][j] = 0;
			}*/
		}


	}
	 ~Matrix()
	{
		if (!data)
		{
			return;
		}

		for (int i = 0; i < rows; i++)
		{
			delete[] data[i];
		}

		delete data;
		data = nullptr;
		columns = 0;
		rows = 0;

	}
	int getRows()const
	{
		return rows;

	}
	int  getColumns()const
	{
		return columns;

	}
	bool  isValidIndex(int r, int c) const
	{
		if ((r >= 0 && r < rows) && (c >= 0 && c < columns))
		{
			return 1;
		}
		return 0;
	}
	T & at(int r, int c)
	{
		if (isValidIndex(r, c))
		{
			return data[r][c];
		}

		exit(0);

	}









};

#endif