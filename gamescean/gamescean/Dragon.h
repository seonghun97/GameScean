#pragma once
#include"Character.h"

class Dragon : public Character
{
public:
	Dragon(const std::string& n, const int hp, const int atk);
	~Dragon();

	void CharacterInfor() const override;
	void TakeDamage(int damage) override;
	void Attack(Character* target) override;

};

