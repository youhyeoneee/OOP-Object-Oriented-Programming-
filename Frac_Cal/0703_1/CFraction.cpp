#include "CFraction.h"

Fraction::Fraction(int num_, int deno_)//생성자
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
		cout << exception << "<---입력" << endl;
		cout << "Input Error!! Plz Retry.." << endl;
		exit(101);

	}
}
//Fraction a;
//Fraction b(a); // a를 num__에 만들기위해 복사생성자를 호출을 하고 
                 // b에다가 num__값을 복사

Fraction::Fraction(Fraction &num__)//복사생성자
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

void Fraction::reduction(void) // 기약분수형태 만드는 함수
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



void Fraction::ShowFraction(void) //분수형태로 출력함수
{
	cout << num << "/" << deno << endl;
}