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
		cout << "����" << level<< "��ī�� �鸸��Ʈ�� ���!" << endl;
		cout << "�������� 30�̴� !" << endl;
	}
	void virtual hit()
	{
		cout << endl;
		cout << "����" << level << "��ī�� �������� �Ծ���!" << endl;
		HP -= 30;
		if (HP < 0)
			HP = 0;
		cout << "��ī�� HP ::" << HP << endl;
	}
	
};

