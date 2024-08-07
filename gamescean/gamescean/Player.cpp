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
	std::cout << "이름 : " << name << "\t" << "체력 : " << hp << "\t " << "공격력 : 100~500"  << "\t " << std::endl;
}
void Player::TakeDamage(int damage)
{
	hp -= damage;
	std::cout << "몬스터에게 공격을 받았다." << std::endl;
	std::cout << "받은데미지 :" << damage << "남은체력 : " << hp << std::endl;
}
void Player::Attack(int atk)
{
	atk = rand() % 400 + atk;
	std::cout << "공격 !!" << std::endl;
	std::cout << atk << "의 데미지를 적에게 입혔다" << std::endl;
}


	

