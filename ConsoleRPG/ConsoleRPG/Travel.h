#pragma once

#include"Battle.h"
#include"Inventory.h"
#include"Character.h"

class Travel
{
private:
	int nrOfEvents;

public:

	Travel();
	virtual ~Travel();
	void generateEvent(Character &character);

	void enemyEncounter(Character &character);
	void safeEncounter(Character &character);
};

