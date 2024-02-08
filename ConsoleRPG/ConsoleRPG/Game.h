#ifndef GAME_H
#define GAME_H
#pragma once

#include "Character.h"
#include "Function.h"
#include <ctime>
#include <vector>
#include <fstream>

class Game
{
public:
	Game();

	virtual ~Game();

	void initGame();
	void mainMenu();
	void createNewCharacter();
	void saveCharacter();
	//void loadCharacter();

	bool getPlaying() const;

private:
	int choice;
	bool playing;

	int activeCharacter;
	std::vector<Character> character;
	std::string fileName;
};

#endif