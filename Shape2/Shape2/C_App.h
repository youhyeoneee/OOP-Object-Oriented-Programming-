#pragma once
#include "C_Cir.h"
#include "C_Rect.h"
#include "C_Try.h"
#include "C_Shape.h"
#include "C_EqTry.h"
#include "C_Sq.h"
#include <algorithm>



class C_App
{
public:
	C_App();
	~C_App() 
	{
		delete shape;
	};
	void run(); 
	bool TryisPossible(float a, float b, float c); //삼각형 가능한지 판별하는 함수

private:
	C_Shape * shape;
};

