#include "Player.h"

Player::Player(const std::string& n, const int hp,const int atk)
	:Character(n, hp, atk)
	
{
}
Player::~Player()
{

}
void Player::CharacterInfor() const
{
	std::cout << "�̸� : " << name << "\t" << "ü�� : " << hp << "\t " << "���ݷ� : 100~500"  << "\t " << std::endl;
}
void Player::TakeDamage(int damage)
{
	hp -= damage;
	std::cout << "���Ϳ��� ������ �޾Ҵ�." << std::endl;
	std::cout << "���������� :" << damage << "����ü�� : " << hp << std::endl;
}
void Player::Attack(int atk)
{
	atk = rand() % 400 + atk;
	std::cout << "���� !!" << std::endl;
	std::cout << atk << "�� �������� ������ ������" << std::endl;
}


	

