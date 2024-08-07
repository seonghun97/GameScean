#pragma once
#include"Character.h"
class Orc : public Character
{
public:
	Orc(const std::string& n, const int hp ,const int atk);
	~Orc();

	
	void CharacterInfor() const override;
	void TakeDamage(int damage) override;
	void Attack(int atk) override;
};

