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
	std::cout << damage << "의 데미지를주었다. " << "남은체력 :" << hp << std::endl << std::endl << std::endl;
	
}
void Slime::Attack(Character* target) {
	int damage = 50 + (rand() % (100 - 50 + 1));
	std::cout << name << "이(가) 공격합니다! 데미지: " << damage << std::endl;
	target->TakeDamage(damage);
	std::cout << std::endl;
}