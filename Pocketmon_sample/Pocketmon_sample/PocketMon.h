#pragma once
#include<iostream>
#include<Windows.h>
#include<string>

using namespace std;
class PocketMon
{
public:
	string name;
	int level=1;
	int HP = 100;
	void virtual skill() = 0;
	void virtual hit() = 0;
	
public:
	PocketMon();
	~PocketMon();
};

