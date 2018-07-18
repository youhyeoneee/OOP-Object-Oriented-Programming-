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
		cout << "·¹º§" << level << name << "¾¾°¡ µ¢ÄðÃ¤ÂïÀ» ½è´Ù!" << endl;
		cout << "µ¥¹ÌÁö´Â 30ÀÌ´Ù !" << endl;
	}
	void virtual hit()
	{
		cout << endl;
		cout << "·¹º§" << level << name << "¾¾°¡ µ¥¹ÌÁö¸¦ ÀÔ¾ú´Ù!" << endl;
		HP -= 30;
		if (HP < 0)
			HP = 0;
		cout << "ÀÌ»óÇØ¾¾ HP ::" << HP << endl;
	}

};

