#include "Orc.h"
#include<time.h>
Orc::Orc(const std::string& n, const int hp, const int atk)
	:Character(n, hp, atk) 
{

}
Orc::~Orc()
{
}

void Orc::CharacterInfor() const
{
	std::cout << "몬스터 이름 : " << name << "\t" << "체력 : " << hp << "\t" << "공격력 : 200 ~ 250" << std::endl;
}

void Orc::TakeDamage(int damage)
{
	hp -= damage;
	std::cout << damage << "의 데미지를받았다. " << "남은체력 :" << hp << std::endl;
}
void Orc::Attack(int atk)
{
	atk = rand() % 50 + 200;
	std::cout << "몬스터" << name << "의 공격 " << atk << std::endl;
}