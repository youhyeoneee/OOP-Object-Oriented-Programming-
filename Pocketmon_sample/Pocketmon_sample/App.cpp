#include "App.h"

App::App()
{
}


App::~App()
{
}

void App::Run()
{
	int ipt, ipt2;
	cout << "1.공격" << endl;
	cout << "2. 모두 공격" << endl;
	cout << "입력 ::"; cin >> ipt;
	system("cls");
	if (ipt == 1)
	{
		cout << "1. 피카츄" << endl;
		cout << "2. 꼬부기" << endl;
		cout << "3. 파이리" << endl;
		cout << "입력 ::"; cin >> ipt2;
		if (ipt2 == 1)
		{
			Pika pika;
			Enemy enemy;
			while (1)
			{
				pika.skill();
				enemy.hit();
				if (enemy.HP <= 0) break;
				enemy.skill();
				pika.hit();
				if (pika.HP <= 0) break;

			} 
			cout << "게임 종료!" << endl;
		}
	}
}

