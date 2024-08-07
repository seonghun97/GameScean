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
	std::cout << "���� �̸� : " << name << "\t" << "ü�� : " << hp << "\t" << "���ݷ� : 100 ~ 150" <<   std::endl;
}

void Slime::TakeDamage(int damage)
{
	hp -= damage;
	std::cout << damage << "�� ���������޾Ҵ�. " << "����ü�� :" << hp << std::endl;
}
void Slime::Attack(int atk)
{
	atk = rand() % 50 + 100;
	std::cout << "����" << name << "�� ���� " << atk << std::endl;
}