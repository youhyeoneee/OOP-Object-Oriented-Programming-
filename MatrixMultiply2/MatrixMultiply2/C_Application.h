#pragma once
#include "C_Matrix.h"
class C_Application
{
public:
	C_Application();
	~C_Application();
	void run(); 
	void iptMatrix(); // ��� �Է¹޴� �Լ�
	void menu(); 
	void showAllMatrix(); //��ü ��� ������ִ� �Լ�
	bool isPossible(int i); // ��� �������� �Ǻ� �Լ�
private:
	C_Matrix matrixArr[2]; // ��� �迭����
};

