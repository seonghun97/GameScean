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
	//	Slime* s = new Slime("������", 2300, atk);
	//	s->CharacterInfor();
	//	s->TakeDamage(10); // �޴µ������� �÷��̾ �����ϴ� �������� �������� 
	//	s->Attack(atk);
	//	Orc* o = new Orc("��ũ", 2000, atk);
	//	o->CharacterInfor();
	//	o->TakeDamage(10);
	//	o->Attack(atk);
	//	std::cout << "-----------------------" << std::endl;
	//	atk = rand() % 400 + 100;
	//	Player* p = new Player("����", 2000, atk);
	//	p->CharacterInfor();
	//	p->TakeDamage(50);
	//	p->Attack(atk);
	//	p->Run();
	//}

	/*std::cout << "�ο�� 1, �������� 2" << std::endl;
	int a = 0;
	std::cin >> a;
	int atk = 0;
	Player* p = new Player("����", 2000, atk, a);
	p->Vs(a);*/

	GameScean MainScene;
	MainScene.Set();


}