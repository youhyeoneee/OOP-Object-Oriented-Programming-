#include "CCalculator.h"



CCalculator::CCalculator()
{
}


CCalculator::~CCalculator()
{
}
void CCalculator::run() {
	int num1, num2, deno1 = 1, deno2 = 1, ipt;

	cout << "1�� �м��� �Է��Ͻÿ�(���� �и� ����)::";
	cin >> num1 >> deno1;
	cout << endl;
	cout << "2�� �м��� �Է��Ͻÿ�(���� �и� ����)::";
	cin >> num2 >> deno2;
	system("cls");

	Fraction frac1(num1, deno1);
	Fraction frac2(num2, deno2);
	Fraction result;

	cout << "1�� �м� ::"; frac1.ShowFraction();
	cout << "2�� �м� ::"; frac2.ShowFraction();
	cout << "----------------------------------------" << endl;
	cout << "1. ����" << endl;
	cout << "2. ����" << endl;
	cout << "3. ����" << endl;
	cout << "4. ������" << endl;
	cout << "0. ����" << endl;
	cout << "----------------------------------------" << endl;
	cout << "�Է� :: ";
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
