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
	std::cout << damage << "�� ���������־���. " << "����ü�� :" << hp << std::endl << std::endl << std::endl;
	
}
void Slime::Attack(Character* target) {
	int damage = 50 + (rand() % (100 - 50 + 1));
	std::cout << name << "��(��) �����մϴ�! ������: " << damage << std::endl;
	target->TakeDamage(damage);
	std::cout << std::endl;
}