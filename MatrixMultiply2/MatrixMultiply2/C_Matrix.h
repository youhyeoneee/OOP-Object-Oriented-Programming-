#pragma once
#include<iostream>
#include<Windows.h>

using namespace std;
class C_Matrix
{
private:
	int row; //��
	int col; //��
	int** arr; //�������迭�� ������ ���������� 

public:
	C_Matrix();
	C_Matrix(int row, int col);//������
	C_Matrix(const C_Matrix &copy); //���������
	~C_Matrix();
	//������ �����ε�
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

		// row1 * col1  ��İ� row2 * col2 �����
		// ���ϸ� row1, col2�����
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


