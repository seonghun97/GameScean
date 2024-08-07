#include<iostream>
#include"Character.h"
#pragma once
class Player : public Character
{
public:
	Player(const std::string& n, const int hp, const int atk);
	~Player();

	
	 void CharacterInfor()const override;
	 void TakeDamage(int damage) override;
	 void Attack(Character* target) override;

};

