//#pragma once
//
//#include<iostream>
//#include<iomanip>
//#include<string>
//
//class Monster
//{
//private:
//	std::string monsterName;
//	int level;
//	int damageMin;
//	int damageMax;
//	int hp;
//	int hpMax;
//	int defense;
//public:
//	Monster(std::string monsterName = "NONE" ,int level = 0, int damageMin = 0,
//		int damageMax = 0, int hp = 0, int hpMax = 0, int defense = 0);
//
//	virtual ~Monster();
//
//	inline bool isAlive() { return this->hp > 0; }
//	inline void takeDamage(int damage) { this->hp -= damage; }
//	inline int getDamage()const { return rand() % this->damageMax - this-> damageMin; }
//	inline int getExp()const { return this->level * 100; }
//};
//
