#include<iostream>
#include<list>
#include<Windows.h>
using namespace std;

int getGcd(int num, int deno)
{
	int a,b;
	list<int> cdList;
	if (num > deno)
	{
		for (int i = deno; i > 0; i--)
		{
			a = num % i;
			b = deno % i;
			if (a == 0 && b == 0)
			{
				cdList.push_back(i);
			}
		}
		int gcd = cdList.front();
		return gcd;
	}
	else if (num < deno)
	{
		for (int i = num; i > 0; i--)
		{
			a = num % i;
			b = deno % i;
			if (a == 0 && b == 0)
			{
				cdList.push_back(i);
			}
		}
		int gcd = cdList.front();

		return gcd;
	}
	else
	{
		int gcd = num;
		return gcd;
	}

	
}

int main(void)
{
	int num1, deno1;

	cout << "1�� �м��� �Է��Ͻÿ�(���� �и� ����)::";
	cin >> num1 >> deno1;
	cout << endl;
	cout << "�ִ�������::";
	cout << getGcd(num1, deno1) << endl;
	system("pause");
}