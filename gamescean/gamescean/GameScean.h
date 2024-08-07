#pragma once
#include <iostream>

class GameScean 
{
public:
	GameScean();
	~GameScean();
	
	void Set();
	void CreateUnit();
	void PrintInfo();
	void Fight(int choice);
	void ChoiceMonster();
	void Battle(class Character* monster);
protected:
	class Character* PPlayer = nullptr;
	class Character* MSlime = nullptr;
	class Character* MOrc = nullptr;
	class Character* MDragon = nullptr;


};