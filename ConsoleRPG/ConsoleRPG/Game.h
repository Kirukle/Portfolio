#ifndef GAME_H
#define GAME_H
#pragma once

#include "Function.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>

class Game
{
public:
	Game();

	virtual ~Game();


	void mainMenu();
	

	bool getPlaying() const;

private:
	int choice;
	bool playing;
};

#endif