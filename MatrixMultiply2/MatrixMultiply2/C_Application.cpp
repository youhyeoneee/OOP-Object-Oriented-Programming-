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
		cout << i+1 << "¹ø Çà·ÄÀÇ Å©±â¸¦ ÀÔ·ÂÇÏ½Ã¿À(Çà ¿­ ¼ø¼­)::";
		cin >> ipt_row >> ipt_col;
		matrixArr[i] = C_Matrix(ipt_row, ipt_col);
		matrixArr[i].setMatrix();

	}
	system("cls");
}

void C_Application::menu()
{
	int ipt;
	//¸í·É ÀÔ·Â¹Þ±â
		while (true)
		{
			showAllMatrix();
			cout << "-----------------------------------------" << endl;
			cout << "1. µ¡¼À" << endl;
			cout << "2. »¬¼À" << endl;
			cout << "3. °ö¼À" << endl;
			cout << "0. Á¾·á" << endl;
			cout << "-----------------------------------------" << endl;
			cout << "ÀÔ·Â ::"; cin >> ipt;

			if (ipt == 1)
			{
				if (isPossible(1))
				{
					C_Matrix sum = matrixArr[0] + matrixArr[1];
					sum.showMatrix();
				}
				else
					cout << "µ¡¼ÀÀÌ ºÒ°¡´ÉÇÕ´Ï´Ù." << endl;
			}
			else if (ipt == 2)
			{
				if (isPossible(2))
				{
					C_Matrix sub = matrixArr[0] - matrixArr[1];
					sub.showMatrix();
				}
				else
					cout << "»¬¼ÀÀÌ ºÒ°¡´ÉÇÕ´Ï´Ù." << endl;
			}
			else if (ipt == 3)
			{
				if (isPossible(3))
				{
					C_Matrix mul = matrixArr[0] * matrixArr[1];
					mul.showMatrix();
				}
				else
					cout << "°öÀÌ ºÒ°¡´ÉÇÕ´Ï´Ù." << endl;
			}
			else if (ipt == 0)
			{
				exit(0);
			}

			else
			{
				cout << "Àß¸øµÈ ÀÔ·ÂÀÔ´Ï´Ù. ´Ù½Ã ÀÔ·ÂÇØÁÖ¼¼¿ä" << endl;
			}
			system("pause");
			system("cls");
		}
}


void C_Application::showAllMatrix()
{
	for (int i = 0; i < 2; i++)
	{
		cout << i + 1 << "¹ø Çà·Ä" << endl;
		matrixArr[i].showMatrix();
	}

}

bool C_Application::isPossible(int i)
{
	if (i == 3) // °ö¼À
	{
		if (matrixArr[0].getCol() == matrixArr[1].getRow())
			return true;
		return false;
	}
	else //µ¡¼À, »¬¼À
	{

		if (matrixArr[0].getCol() == matrixArr[1].getCol())
		{
			if (matrixArr[0].getRow() == matrixArr[1].getRow())
				return true;
		}
		return false;

	}
}
