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
	cout << "1.����" << endl;
	cout << "2. ��� ����" << endl;
	cout << "�Է� ::"; cin >> ipt;
	system("cls");
	if (ipt == 1)
	{
		cout << "1. ��ī��" << endl;
		cout << "2. ���α�" << endl;
		cout << "3. ���̸�" << endl;
		cout << "�Է� ::"; cin >> ipt2;
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
			cout << "���� ����!" << endl;
		}
	}
}

