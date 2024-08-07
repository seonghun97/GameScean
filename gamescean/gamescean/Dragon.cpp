#include "Dragon.h"

Dragon::Dragon(const std::string& n, const int hp, const int atk)
	:Character(n, hp, atk)
{

}
Dragon::~Dragon()
{
}

void Dragon::CharacterInfor() const
{
	std::cout << "몬스터 이름 : " << name << "\t" << "체력 : " << hp << "\t" << "공격력 : 300 ~ 400" << std::endl;
}

void Dragon::TakeDamage(int damage)
{
	hp -= damage;
	std::cout << damage << "의 데미지를받았다. " << "남은체력 :" << hp << std::endl;
}
void Dragon::Attack(int atk)
{
	atk = rand() % 100 + 300;
	std::cout << "몬스터" << name << "의 공격 " << atk << std::endl;
}