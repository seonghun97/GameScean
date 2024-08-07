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
	if (MOrc != nullptr) 
	{
		delete MOrc;
		MOrc = nullptr;
	}
	if (MSlime != nullptr)
	{
		delete MSlime;
		MSlime = nullptr;
	}
	if (PPlayer != nullptr)
	{
		delete PPlayer;
		PPlayer = nullptr;
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



void GameScean::ChoiceMonster() {
	std::cout << "����� ���� ����ּ���" << std::endl;
	std::cout << "1. ������   2. ��ũ    3. �巡��" << std::endl;
	int Num;
	std::cin >> Num;

	if (Num == 1) {
		std::cout << "������ " << std::endl;
		MSlime->CharacterInfor();
		Battle(MSlime);
	}
	else if (Num == 2) {
		std::cout << "��ũ" << std::endl;
		MOrc->CharacterInfor();
		Battle(MOrc);
	}
	else if (Num == 3) {
		std::cout << "�巡��" << std::endl;
		MDragon->CharacterInfor();
		Battle(MDragon);
	}
	else {
		std::cout << "1~3�� ���� " << std::endl;
		return ChoiceMonster();
	}
}
void GameScean::Battle(Character* monster) 
{
	while (PPlayer->GetHp() > 0 && monster->GetHp() > 0) 
	{
		std::cout << "1. �����Ѵ� 2. ��������" << std::endl;
		int choice;
		std::cin >> choice;
		if (choice == 1)
		{
			PPlayer->Attack(monster);
			if (monster->GetHp() > 0) 
			{
				monster->Attack(PPlayer);
			}
		}
		else if (choice == 2) 
		{
			std::cout << "�����ƽ��ϴ�!" << std::endl;
			return;
		}
		else
		{
			std::cout << "1 �Ǵ� 2�� �����ϼ���." << std::endl;
			continue;
		}

		std::cout << "���� ����:" << std::endl;
		PPlayer->CharacterInfor();
		monster->CharacterInfor();
	}

	if (PPlayer->GetHp() <= 0)
	{
		std::cout << "�÷��̾ �й��߽��ϴ�." << std::endl;
	}
	else 
	{
		std::cout << "�÷��̾ �¸��߽��ϴ�." << std::endl;
	}
}
