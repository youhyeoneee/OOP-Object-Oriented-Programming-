#include "CCalculator.h"



CCalculator::CCalculator()
{
}


CCalculator::~CCalculator()
{
}
void CCalculator::run() {
	int num1, num2, deno1 = 1, deno2 = 1, ipt;

	cout << "1번 분수를 입력하시오(분자 분모 순서)::";
	cin >> num1 >> deno1;
	cout << endl;
	cout << "2번 분수를 입력하시오(분자 분모 순서)::";
	cin >> num2 >> deno2;
	system("cls");

	Fraction frac1(num1, deno1);
	Fraction frac2(num2, deno2);
	Fraction result;

	cout << "1번 분수 ::"; frac1.ShowFraction();
	cout << "2번 분수 ::"; frac2.ShowFraction();
	cout << "----------------------------------------" << endl;
	cout << "1. 덧셈" << endl;
	cout << "2. 뺄셈" << endl;
	cout << "3. 곱셈" << endl;
	cout << "4. 나눗셈" << endl;
	cout << "0. 종료" << endl;
	cout << "----------------------------------------" << endl;
	cout << "입력 :: ";
	cin >> ipt;

	if (ipt == 1)
	{
		result = frac1 + frac2;
		result.ShowFraction();
	}
	else if (ipt == 2)
	{
		result = frac1 - frac2;
		result.ShowFraction();
	}
	else if (ipt == 3)
	{
		result = frac1 * frac2;
		result.ShowFraction();
	}
	else if (ipt == 4)
	{
		result = frac1 / frac2;
		result.ShowFraction();
	}
	
}
