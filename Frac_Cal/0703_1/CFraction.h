#pragma once
#include <iostream>
#include<Windows.h>

using namespace std;
class Fraction
{
	int num; // ����
	int deno; // �и�
public:
	Fraction(int num_ = 0, int deno_ = 1); //������
	Fraction(Fraction &num__); //���������
	Fraction operator+(Fraction num__); // +�����ε� 
	Fraction operator-(Fraction num__); // -�����ε� 
	Fraction operator*(Fraction num__); // *�����ε� 
	Fraction operator/(Fraction num__); // /�����ε� 
	void reduction(void); // ���м����� ����� �Լ�
	void ShowFraction(void); //�м����·� ����Լ�
};

