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
	std::cout << "���� �̸� : " << name << "\t" << "ü�� : " << hp << "\t" << "���ݷ� : 300 ~ 400" << std::endl;
}

void Dragon::TakeDamage(int damage)
{
	hp -= damage;
	std::cout << damage << "�� ���������޾Ҵ�. " << "����ü�� :" << hp << std::endl;
}
void Dragon::Attack(int atk)
{
	atk = rand() % 100 + 300;
	std::cout << "����" << name << "�� ���� " << atk << std::endl;
}