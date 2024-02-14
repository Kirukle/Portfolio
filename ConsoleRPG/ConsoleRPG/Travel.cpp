#include "Travel.h"

Travel::Travel()
{

}

Travel::~Travel()
{

}

void Travel::generateEvent(Character &character)
{
	safeEncounter(character);
	/*int i = rand() % this->nrOfEvents;
	
	switch (i)
	{
	case 0:

		enemyEncounter(character);
		break;

	case 1:

		safeEncounter(character);
		break;
	case 2:
		break;

	default:
		break;
	}*/
}

void Travel::enemyEncounter(Character& character)
{
	//While
}

void Travel::safeEncounter(Character& character)
{
	int gainExp = rand() % (character.getLuck() 
		* character.getLevel());

	character.gainExp(gainExp);
	std::cout << "YOU GAINED " << gainExp << " EXP!" << "\n\n";
}
