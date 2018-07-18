#pragma once
#include<iostream>
#include<Windows.h>
#define PI 3.14159265358979323846

using namespace std;

class C_Shape
{
public:
	float Area; //넓이
	float Circum; //둘레

public:
	C_Shape();
	~C_Shape();
	void virtual calc_Area() = 0;
	void virtual calc_Circum() = 0;
	void getinfo() 
	{
		int i;
			cout << "-----------------------------" << endl;
			cout << "1. 둘레" << endl;
			cout << "2. 넓이" << endl;
			cout << "-----------------------------" << endl;
			cout << "입력 ::"; cin >> i;
			if (i == 1)
			{
				cout << "둘레는 ::" << Circum << "입니다";
				system("pause");
				system("cls");
			}
			else if (i == 2)
			{
				cout << "넓이는 ::" << Area << "입니다";
				system("pause");
				system("cls");

			}
			else
			{
				cout << "잘못된 입력입니다." << endl;
				system("pause");
				system("cls");

			}
	
	}


};

