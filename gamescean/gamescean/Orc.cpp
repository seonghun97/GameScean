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
void Orc::Attack(Character* target) {
	int damage = 100 + (rand() % (150 - 100 + 1));
	std::cout << name << "이(가) 공격합니다! 데미지: " << damage << std::endl<<std::endl;
	target->TakeDamage(damage);
	std::cout << std::endl;
}