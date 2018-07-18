#include "C_Matrix.h"



C_Matrix::C_Matrix()
{
}


C_Matrix::C_Matrix(int row, int col)//생성자
{
	this->row = row;
	this->col = col;
	this->arr = new int*[row]; // 행 개수만큼 동적할당
	for (int i = 0; i < col; i++)
		arr[i] = new int[col]; //행에 열 개수만큼 동적할당

}

C_Matrix::C_Matrix(const C_Matrix &copy)//복사생성자
{
	this->row = copy.row;
	this->col = copy.col;
	arr = new int*[row]; // 행 개수만큼 동적할당
	for (int i = 0; i < col; i++)
		arr[i] = new int[col]; //행에 열 개수만큼 동적할당

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			arr[i][j] = copy.arr[i][j];
}

void C_Matrix::setMatrix()
{
	cout << row * col << "개의 행렬의 요소를 입력하시오" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "입력 ::"; cin >> arr[i][j]; 
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