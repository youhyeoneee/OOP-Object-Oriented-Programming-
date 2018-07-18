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
			this->skillName = "ºÒ²É¼¼·Ê";
			this->Type = "ºÒ";
			this->Force = 10;
		}
		
	}
	else if (Code == 12)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "ÇÚµåÆù´øÁö±â";
			this->Type = "ºÒ";
			this->Force = 15;
		}
	}
	else if (Code == 21)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "¹°´ëÆ÷";
			this->Type = "¹°";
			this->Force = 10;

		}

	}
	else if (Code == 22)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "º°´ÙÁÙ";
			this->Type = "¹°";
			this->Force = 15;
		}
	}
	else if (Code == 31)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "µ¢ÄðÃ¤Âï";
			this->Type = "Ç®";
			this->Force = 10;
		}
	}
	else if (Code == 32)
	{
		//if (Mon.Evolution == 1)
		{
			this->skillName = "Áöµü´ë±â";
			this->Type = "Ç®";
			this->Force = 15;
		}
	}

}


Skill::~Skill()
{
}
