#pragma once
#include<iostream>
#include<Windows.h>

using namespace std;
class C_Matrix
{
private:
	int row; //행
	int col; //열
	int** arr; //이차원배열을 저장할 더블포인터 

public:
	C_Matrix();
	C_Matrix(int row, int col);//생성자
	C_Matrix(const C_Matrix &copy); //복사생성자
	~C_Matrix();
	//연산자 오버로딩
	C_Matrix operator +(C_Matrix &matrix)
	{
		C_Matrix temp(matrix);
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
				temp.arr[i][j] = this->arr[i][j] + matrix.arr[i][j];
		
		return temp;
	};
	C_Matrix operator -(C_Matrix &matrix)
	{
		C_Matrix temp(matrix);
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
				temp.arr[i][j] = this->arr[i][j] - matrix.arr[i][j];

		return temp;
	};
	C_Matrix operator *(C_Matrix &matrix)
	{

		// row1 * col1  행렬과 row2 * col2 행렬은
		// 곱하면 row1, col2행렬임
		C_Matrix temp(this->row, matrix.col);
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < matrix.col; j++)
			{
				int sum=0;
				for (int k = 0; k < col; k++)
				{
					sum += this->arr[i][k] * matrix.arr[k][j];
				}
				temp.arr[i][j] = sum;
			}

		}
		/*for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << " " << tmp.data[i][j];
			}
			cout << endl;
		}*/
		return temp;
		
	
	};
	
public:
	int getRow() { return row; };
	int getCol() { return col; };
	void setMatrix();
	void showMatrix();
};


