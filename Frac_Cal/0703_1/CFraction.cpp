#include "CFraction.h"

Fraction::Fraction(int num_, int deno_)//������
{
	try
	{
		if (deno_ == 0)
			throw deno_;

		num = num_;
		deno = deno_;

	}
	catch (int exception)
	{
		cout << exception << "<---�Է�" << endl;
		cout << "Input Error!! Plz Retry.." << endl;
		exit(101);

	}
}
//Fraction a;
//Fraction b(a); // a�� num__�� ��������� ��������ڸ� ȣ���� �ϰ� 
                 // b���ٰ� num__���� ����

Fraction::Fraction(Fraction &num__)//���������
{
	deno = num__.deno;
	num = num__.num;
}

Fraction Fraction::operator +(Fraction num__) 
{
	Fraction temp;

	temp.num = this->num * num__.deno + this->deno * num__.num;
	temp.deno = this->deno * num__.deno;
	temp.reduction();

	return temp;
}

Fraction Fraction::operator -(Fraction num__) 
{
	Fraction temp;

	temp.num = this->num * num__.deno - this->deno * num__.num;
	temp.deno = this->deno * num__.deno;
	temp.reduction();

	return temp;
}

Fraction Fraction::operator *(Fraction num__) 
{
	Fraction temp;

	temp.num = this->num * num__.num;
	temp.deno = this->deno * num__.deno;
	temp.reduction();

	return temp;
}

Fraction Fraction::operator /(Fraction num__) 
{
	Fraction temp;

	temp.num = this->deno * num__.num;
	temp.deno = this->num * num__.deno;
	temp.reduction();

	return temp;
}

void Fraction::reduction(void) // ���м����� ����� �Լ�
{
	int n, d, rest = 1;

	n = abs(num);
	d = abs(deno);

	if (n > d)
	{
		while (rest != 0)
		{
			rest = n % d;
			n = d;
			d = rest;
		}
		rest = n;
	}
	else if (n < d)
	{
		while (rest != 0)
		{
			rest = d % n;
			d = n;
			n = rest;
		}
		rest = d;
	}
	else
		rest = d;

	num = num / rest;
	deno = deno / rest;

}



void Fraction::ShowFraction(void) //�м����·� ����Լ�
{
	cout << num << "/" << deno << endl;
}