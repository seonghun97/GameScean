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
	std::cout << "���� �̸� : " << name << "\t" << "ü�� : " << hp << "\t" << "���ݷ� : 200 ~ 250" << std::endl;
}

void Orc::TakeDamage(int damage)
{
	hp -= damage;
	std::cout << damage << "�� ���������޾Ҵ�. " << "����ü�� :" << hp << std::endl;
}
void Orc::Attack(Character* target) {
	int damage = rand() % 50 + 100;
	std::cout << name << "��(��) �����մϴ�! ������: " << damage << std::endl<<std::endl;
	target->TakeDamage(damage);
	std::cout << std::endl;
}