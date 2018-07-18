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

	cout << "1번 분수를 입력하시오(분자 분모 순서)::";
	cin >> num1 >> deno1;
	cout << endl;
	cout << "최대공약수는::";
	cout << getGcd(num1, deno1) << endl;
	system("pause");
}