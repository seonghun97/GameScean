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
	std::cout << "이름 : " << name << "\t" << "체력 : " << hp << "\t " << "공격력 : 100~500"  << "\t " << std::endl <<std::endl;

}
void Player::TakeDamage(int damage)
{
	hp -= damage;
	std::cout << "몬스터에게 공격을 받았다." << std::endl;
	std::cout << "받은데미지 :" << damage << "남은체력 : " << hp << std::endl;
}
void Player::Attack(Character* target)
{
	int damage = rand() % 201 + 100;
	std::cout << name << "이(가) 공격합니다! 데미지: " << damage << std::endl;
	target->TakeDamage(damage);
}


	

