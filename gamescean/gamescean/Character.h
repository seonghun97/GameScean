#pragma once
#include<iostream>
#include<time.h>
class Character
{
protected:
	std::string name; //�̸�
	int hp = 0; // ü��
	int atk = 0; // ���ݷ�
public:
	Character(const std::string& n, const int hp, const int atk);
	virtual ~Character();

	virtual int GetHp()
	{
		return hp;
	}
	std::string GetName() const
	{
		return name;
	}


	virtual void CharacterInfor() const = 0;
	virtual void TakeDamage(int damage) = 0;
	virtual void Attack(Character* target) = 0;
};

