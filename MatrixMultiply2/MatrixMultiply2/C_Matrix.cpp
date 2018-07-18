#include "C_Matrix.h"



C_Matrix::C_Matrix()
{
}


C_Matrix::C_Matrix(int row, int col)//������
{
	this->row = row;
	this->col = col;
	this->arr = new int*[row]; // �� ������ŭ �����Ҵ�
	for (int i = 0; i < col; i++)
		arr[i] = new int[col]; //�࿡ �� ������ŭ �����Ҵ�

}

C_Matrix::C_Matrix(const C_Matrix &copy)//���������
{
	this->row = copy.row;
	this->col = copy.col;
	arr = new int*[row]; // �� ������ŭ �����Ҵ�
	for (int i = 0; i < col; i++)
		arr[i] = new int[col]; //�࿡ �� ������ŭ �����Ҵ�

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			arr[i][j] = copy.arr[i][j];
}

void C_Matrix::setMatrix()
{
	cout << row * col << "���� ����� ��Ҹ� �Է��Ͻÿ�" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "�Է� ::"; cin >> arr[i][j]; 
		}
	}

}

void C_Matrix::showMatrix()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

}

C_Matrix::~C_Matrix()
{

}