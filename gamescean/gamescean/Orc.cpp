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
void Orc::Attack(int atk)
{
	atk = rand() % 50 + 200;
	std::cout << "����" << name << "�� ���� " << atk << std::endl;
}