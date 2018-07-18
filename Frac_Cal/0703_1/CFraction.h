#pragma once
#include <iostream>
#include<Windows.h>

using namespace std;
class Fraction
{
	int num; // 분자
	int deno; // 분모
public:
	Fraction(int num_ = 0, int deno_ = 1); //생성자
	Fraction(Fraction &num__); //복사생성자
	Fraction operator+(Fraction num__); // +오버로딩 
	Fraction operator-(Fraction num__); // -오버로딩 
	Fraction operator*(Fraction num__); // *오버로딩 
	Fraction operator/(Fraction num__); // /오버로딩 
	void reduction(void); // 기약분수형태 만드는 함수
	void ShowFraction(void); //분수형태로 출력함수
};

