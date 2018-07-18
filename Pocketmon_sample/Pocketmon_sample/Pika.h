#pragma once
#include "PocketMon.h"
#include "Enemy.h"

class Pika :
	public PocketMon
{
public:
	Pika();
	~Pika();
	void virtual skill()
	{
		cout << endl;
		cout << "레벨" << level<< "피카츄가 백만볼트를 썼다!" << endl;
		cout << "데미지는 30이다 !" << endl;
	}
	void virtual hit()
	{
		cout << endl;
		cout << "레벨" << level << "피카츄가 데미지를 입었다!" << endl;
		HP -= 30;
		if (HP < 0)
			HP = 0;
		cout << "피카츄 HP ::" << HP << endl;
	}
	
};

