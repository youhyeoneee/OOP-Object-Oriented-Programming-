#pragma once
#include "C_Shape.h"
class C_Rect :
	public C_Shape
{
private:
	float garo;
	float sero;

public:
	C_Rect();
	C_Rect(float garo, float sero)
	{
		this->garo = garo;
		this->sero = sero;
		calc_Area();
		calc_Circum();
	
	};
	~C_Rect();

	void virtual calc_Area()//넓이 계산
	{
		this->Area = garo * sero;
	}
	void virtual calc_Circum()//둘레 계산
	{
		this->Circum = (garo + sero) * 2;

	}

};

