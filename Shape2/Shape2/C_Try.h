#pragma once
#include "C_Shape.h"
class C_Try :
	public C_Shape
{
private:
	float a, b, c; //세 변의 길이
public:
	C_Try();
	C_Try(float a, float b, float c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		calc_Area();
		calc_Circum();

	};
	~C_Try();

	void virtual calc_Area()//넓이 계산
							// s＝(a＋b＋c)/2 이라 하면,
							//삼각형의 넓이(S)＝√s(s－a)(s－b)(s－c)
	{
		int s = (a + b + c) / 2;
		this->Area = sqrt(s*(s - a)*(s - b)*(s - c));
	}
	void virtual calc_Circum()//둘레 계산
	{
		this->Circum = a+b+c ;
	}

};

