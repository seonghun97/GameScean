#include "Slime.h"
#include"Player.h"
#include"Orc.h"
#include"Dragon.h"
#include<time.h>

#include "GameScean.h"

int main()
{
	//srand((unsigned int)time(NULL));
	//int atk = 0;
	//atk = rand() % 50 + 100;
	//for (int i = 0; i < 5; i++)
	//{
	//	Slime* s = new Slime("슬라임", 2300, atk);
	//	s->CharacterInfor();
	//	s->TakeDamage(10); // 받는데미지는 플레이어가 공격하는 데미지를 넣을예정 
	//	s->Attack(atk);
	//	Orc* o = new Orc("오크", 2000, atk);
	//	o->CharacterInfor();
	//	o->TakeDamage(10);
	//	o->Attack(atk);
	//	std::cout << "-----------------------" << std::endl;
	//	atk = rand() % 400 + 100;
	//	Player* p = new Player("뉴비", 2000, atk);
	//	p->CharacterInfor();
	//	p->TakeDamage(50);
	//	p->Attack(atk);
	//	p->Run();
	//}

	/*std::cout << "싸운다 1, 도망간다 2" << std::endl;
	int a = 0;
	std::cin >> a;
	int atk = 0;
	Player* p = new Player("유저", 2000, atk, a);
	p->Vs(a);*/

	GameScean MainScene;
	MainScene.Set();


}