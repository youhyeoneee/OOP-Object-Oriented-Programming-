#pragma once
#include "C_Shape.h"
class C_EqTry :
	public C_Shape
{
private:
	float side;

public:
	C_EqTry();
	C_EqTry(float side)
	{
		this->side = side;
		calc_Area();
		calc_Circum();
	};

	~C_EqTry();

	void virtual calc_Area()//넓이 계산
	{
		this->Area = sqrt(3)/4*side*side;
	}
	void virtual calc_Circum()//둘레 계산
	{
		this->Circum = side * 3;

	}
};

