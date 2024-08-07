#include "Slime.h"
Slime::Slime(const std::string& n, const int hp , const int atk)
	:Character(n,hp,atk)
{

}
Slime::~Slime()
{
}

void Slime::CharacterInfor() const
{
	std::cout << "몬스터 이름 : " << name << "\t" << "체력 : " << hp << "\t" << "공격력 : 100 ~ 150" <<   std::endl;
}

void Slime::TakeDamage(int damage)
{
	hp -= damage;
	std::cout << damage << "의 데미지를받았다. " << "남은체력 :" << hp << std::endl;
}
void Slime::Attack(int atk)
{
	atk = rand() % 50 + 100;
	std::cout << "몬스터" << name << "의 공격 " << atk << std::endl;
}