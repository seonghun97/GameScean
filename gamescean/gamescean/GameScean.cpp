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
	std::cout << "몬스터와 만났다" << std::endl<<std::endl;
	
	std::cout << "1 싸운다 2 도망간다" << std::endl;
	int Num;
	std::cin >> Num;
	Fight(Num);
	
}

void GameScean::CreateUnit()
{
	MDragon = new Dragon("드래곤", 50000, 400);
	MOrc = new Orc("오크", 2500, 150);
	MSlime = new Slime("슬라임", 850, 100);
	PPlayer = new Player("유저", 2000, 800);
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
		std::cout << "전투가 시작됩니다 " << std::endl;
		ChoiceMonster();
		
	}
	else if (choice == 2)
	{
		std::cout << "게임이 종료됩니다 " << std::endl;
		exit(0);
	}
	else
	{
		std::cout << "1 과 2중하나만 눌러주세요 " << std::endl;
		return Set();
	}
}

//void GameScean::Dead()
//{
//	PPlayer->GetHp();
//}

void GameScean::ChoiceMonster()
{
	std::cout << "상대할 적을 골라주세요" << std::endl;
	std::cout << "1. 슬라임   2. 오크    3. 드래곤" << std::endl;
	int Num;
	std::cin >> Num;

	if (Num == 1)
	{
		std::cout << "슬라임 " << std::endl;
		MSlime->CharacterInfor();
		
	}
	else if (Num == 2)
	{
		std::cout << "오크" << std::endl;
	}
	else if (Num == 3)
	{
		std::cout << "드래곤" << std::endl;
	}
	else
	{
		std::cout << "1~3만 골라라 " << std::endl;
		return ChoiceMonster();
	}
}


