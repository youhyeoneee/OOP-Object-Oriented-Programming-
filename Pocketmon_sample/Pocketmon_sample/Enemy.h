#pragma once
#include "PocketMon.h"
class Enemy :
	public PocketMon
{
public:
	Enemy();
	~Enemy();
	void virtual skill()
	{
		cout << endl;
		cout << "����" << level << name << "���� ����ä���� ���!" << endl;
		cout << "�������� 30�̴� !" << endl;
	}
	void virtual hit()
	{
		cout << endl;
		cout << "����" << level << name << "���� �������� �Ծ���!" << endl;
		HP -= 30;
		if (HP < 0)
			HP = 0;
		cout << "�̻��ؾ� HP ::" << HP << endl;
	}

};

