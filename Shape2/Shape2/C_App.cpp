#include "C_App.h"

C_App::C_App()
{
}



void C_App::run()
{

	int ipt;
	
	while (true)
	{
		system("cls");
		cout << "도형 선택" << endl;
		cout << "-----------------------------" << endl;
		cout << "1. 직사각형" << endl;
		cout << "2. 정사각형" << endl;
		cout << "3. 삼각형" << endl;
		cout << "4. 정삼각형" << endl;
		cout << "5. 원" << endl;
		cout << "0. 종료" << endl;
		cout << "-----------------------------" << endl;
		cout << "입력 :: "; cin >> ipt;
		system("cls");

		if (ipt == 1) //직사각형
		{
			float garo, sero;
			cout << "현재 도형 :: 직사각형" << endl;
			cout << "-----------------------------" << endl;
			cout << "가로 길이 입력 ::"; cin >> garo;
			cout << "세로 길이 입력 ::"; cin >> sero; cout << endl;
			shape = new C_Rect(garo, sero);

			system("cls");
			cout << "현재 도형 :: 직사각형" << endl;
			cout << "가로 길이 ::" << garo << endl;
			cout << "세로 길이 ::" << sero << endl;
			shape->getinfo();

		}
		else if (ipt == 2) //정사각형
		{
			float side;
			cout << "현재 도형 :: 정사각형" << endl;
			cout << "-----------------------------" << endl;
			cout << "한 변의 길이 입력 ::"; cin >> side; cout << endl;
			shape = new C_Sq(side);

			system("cls");
			cout << "현재 도형 :: 정사각형" << endl;
			cout << "한 변의 길이 ::" << side << endl;
			shape->getinfo();

		}
		else if (ipt == 3) //삼각형
		{

			float a, b, c;
			cout << "현재 도형 :: 삼각형" << endl;
			cout << "-----------------------------" << endl;
			cout << "첫번째 변 길이 입력 ::"; cin >> a;
			cout << "두번째 변 길이 입력 ::"; cin >> b;
			cout << "세번째 변 길이 입력 ::"; cin >> c; cout << endl;
			shape = new C_Try(a, b, c);

			if (TryisPossible(a, b, c)) //삼각형 만들어질수 있는지 판별
			{
				system("cls");

				cout << "현재 도형 :: 삼각형" << endl;
				cout << "첫번째 변 길이 ::" << a << endl;
				cout << "두번째 변 길이 ::" << b << endl;
				cout << "세번째 변 길이 ::" << c << endl;
				shape->getinfo();
			}
			else
			{
				cout << "삼각형이 아닙니다" << endl;;
				system("pause");
			}
			}
		else if (ipt == 4) //정삼각형
		{
			float side;
			cout << "현재 도형 :: 정삼각형" << endl;
			cout << "-----------------------------" << endl;
			cout << "한 변의 길이 입력 ::"; cin >> side; cout << endl;
			shape = new C_EqTry(side);

			system("cls");
			cout << "현재 도형 :: 정삼각형" << endl;
			cout << "한 변의 길이 ::" << side << endl;
			shape->getinfo();

		}
		else if (ipt == 5) //원
		{
			float r;
			cout << "현재 도형 :: 원" << endl;
			cout << "-----------------------------" << endl;
			cout << "원 길이 입력 ::"; cin >> r; cout << endl;
			shape = new C_Cir(r);

			system("cls");
			cout << "현재 도형 :: 원" << endl;
			cout << "반지름 길이 ::" << r << endl;
			shape->getinfo();
		}
		else if (ipt == 0) //종료
		{
			system("pause");
			break;
		}
		else
			cout << "잘못된 입력입니다." << endl;
		
	}
	
}

bool C_App::TryisPossible(float a, float b, float c) //삼각형 가능 판별 함수
{
	if (max(a, b) == a && max(a,c) ==a) //a가 제일 크다
	{
		if (a < b + c)
			return true;
		else
			return false;
	}
	else if (max(a, b) == b && max(b, c) == b) //b가 제일 크다
	{
		if (b < a + c)
			return true;
		else
			return false;
	}
	else if (max(a, c) == c && max(b, c) == c) //c가 제일 크다
	{
		if (c < a + b)
			return true;
		else
			return false;
	}

}
