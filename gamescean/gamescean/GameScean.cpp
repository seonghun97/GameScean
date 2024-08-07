#include "GameScean.h"

#include"Orc.h"
#include"Slime.h"
#include"Player.h"
#include "Dragon.h"

#define Run 1

GameScean::GameScean()
{

}
GameScean::~GameScean()
{
	if (MDragon != nullptr)
	{
		delete MDragon;
		MDragon = nullptr;
	}
}



void GameScean::Set()
{
	CreateUnit();
	std::cout << "���Ϳ� ������" << std::endl<<std::endl;
	
	std::cout << "1 �ο�� 2 ��������" << std::endl;
	int Num;
	std::cin >> Num;
	Fight(Num);
	
}

void GameScean::CreateUnit()
{
	MDragon = new Dragon("�巡��", 50000, 400);
	MOrc = new Orc("��ũ", 2500, 150);
	MSlime = new Slime("������", 850, 100);
	PPlayer = new Player("����", 2000, 800);
}

void GameScean::PrintInfo()
{
	MDragon->CharacterInfor();
	MOrc->CharacterInfor();
	MSlime->CharacterInfor();
	PPlayer->CharacterInfor();

}
void GameScean::Fight(int choice)
{
	if (choice == 1)
	{
		std::cout << "������ ���۵˴ϴ� " << std::endl;
		ChoiceMonster();
		
	}
	else if (choice == 2)
	{
		std::cout << "������ ����˴ϴ� " << std::endl;
		exit(0);
	}
	else
	{
		std::cout << "1 �� 2���ϳ��� �����ּ��� " << std::endl;
		return Set();
	}
}

//void GameScean::Dead()
//{
//	PPlayer->GetHp();
//}

void GameScean::ChoiceMonster()
{
	std::cout << "����� ���� ����ּ���" << std::endl;
	std::cout << "1. ������   2. ��ũ    3. �巡��" << std::endl;
	int Num;
	std::cin >> Num;

	if (Num == 1)
	{
		std::cout << "������ " << std::endl;
		MSlime->CharacterInfor();
		
	}
	else if (Num == 2)
	{
		std::cout << "��ũ" << std::endl;
	}
	else if (Num == 3)
	{
		std::cout << "�巡��" << std::endl;
	}
	else
	{
		std::cout << "1~3�� ���� " << std::endl;
		return ChoiceMonster();
	}
}


