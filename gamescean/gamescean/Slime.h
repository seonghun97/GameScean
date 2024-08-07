#pragma once
#include"Character.h"
class Slime : public Character
{
public:
	Slime(const std::string& n, const int hp, const int atk);
	~Slime();


	void CharacterInfor()const override;
	void TakeDamage(int damage) override;
	void Attack(int atk) override;
};
