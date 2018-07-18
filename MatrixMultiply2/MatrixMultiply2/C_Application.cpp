#include "C_Application.h"



C_Application::C_Application()
{
}


C_Application::~C_Application()
{
}

void C_Application::run()
{
	iptMatrix();
	menu();
}

void C_Application::iptMatrix()
{
	int ipt_row;
	int ipt_col;
	
	for (int i = 0; i < 2; i++)
	{
		cout << i+1 << "�� ����� ũ�⸦ �Է��Ͻÿ�(�� �� ����)::";
		cin >> ipt_row >> ipt_col;
		matrixArr[i] = C_Matrix(ipt_row, ipt_col);
		matrixArr[i].setMatrix();

	}
	system("cls");
}

void C_Application::menu()
{
	int ipt;
	//��� �Է¹ޱ�
		while (true)
		{
			showAllMatrix();
			cout << "-----------------------------------------" << endl;
			cout << "1. ����" << endl;
			cout << "2. ����" << endl;
			cout << "3. ����" << endl;
			cout << "0. ����" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "�Է� ::"; cin >> ipt;

			if (ipt == 1)
			{
				if (isPossible(1))
				{
					C_Matrix sum = matrixArr[0] + matrixArr[1];
					sum.showMatrix();
				}
				else
					cout << "������ �Ұ����մϴ�." << endl;
			}
			else if (ipt == 2)
			{
				if (isPossible(2))
				{
					C_Matrix sub = matrixArr[0] - matrixArr[1];
					sub.showMatrix();
				}
				else
					cout << "������ �Ұ����մϴ�." << endl;
			}
			else if (ipt == 3)
			{
				if (isPossible(3))
				{
					C_Matrix mul = matrixArr[0] * matrixArr[1];
					mul.showMatrix();
				}
				else
					cout << "���� �Ұ����մϴ�." << endl;
			}
			else if (ipt == 0)
			{
				exit(0);
			}

			else
			{
				cout << "�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���" << endl;
			}
			system("pause");
			system("cls");
		}
}


void C_Application::showAllMatrix()
{
	for (int i = 0; i < 2; i++)
	{
		cout << i + 1 << "�� ���" << endl;
		matrixArr[i].showMatrix();
	}

}

bool C_Application::isPossible(int i)
{
	if (i == 3) // ����
	{
		if (matrixArr[0].getCol() == matrixArr[1].getRow())
			return true;
		return false;
	}
	else //����, ����
	{

		if (matrixArr[0].getCol() == matrixArr[1].getCol())
		{
			if (matrixArr[0].getRow() == matrixArr[1].getRow())
				return true;
		}
		return false;

	}
}
