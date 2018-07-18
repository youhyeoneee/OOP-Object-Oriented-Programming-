#pragma once
#include "C_Matrix.h"
class C_Application
{
public:
	C_Application();
	~C_Application();
	void run(); 
	void iptMatrix(); // 행렬 입력받는 함수
	void menu(); 
	void showAllMatrix(); //전체 행렬 출력해주는 함수
	bool isPossible(int i); // 계산 가능한지 판별 함수
private:
	C_Matrix matrixArr[2]; // 행렬 배열변수
};

