#include "Skill.h"



Skill::Skill()
{
}

Skill::Skill(int Code)
{
	if (Code == 11)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "�Ҳɼ���";
			this->Type = "��";
			this->Force = 10;
		}
		
	}
	else if (Code == 12)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "�ڵ���������";
			this->Type = "��";
			this->Force = 15;
		}
	}
	else if (Code == 21)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "������";
			this->Type = "��";
			this->Force = 10;

		}

	}
	else if (Code == 22)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "������";
			this->Type = "��";
			this->Force = 15;
		}
	}
	else if (Code == 31)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "����ä��";
			this->Type = "Ǯ";
			this->Force = 10;
		}
	}
	else if (Code == 32)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "�������";
			this->Type = "Ǯ";
			this->Force = 15;
		}
	}

}


Skill::~Skill()
{
}
