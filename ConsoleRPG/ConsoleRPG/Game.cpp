#include "Game.h"

using namespace std;

Game::Game()
{

	choice = 0;
	playing = true;
	activeCharacter = 0;
	fileName = "character.txt";
}


Game::~Game()
{

}

void Game::initGame()
{
	createNewCharacter();
}

void Game::mainMenu() 
{
	if (this->character[activeCharacter].getExp() >=
		this->character[activeCharacter].getExpNext())
	{
		std::cout << "LEVEL UP AVAILABLE! \n\n";
	}



	std::cout << "= MAIN MENU =" << std::endl << std::endl;

	std::cout << "Random" << std::endl;
	std::cout << "0: Quit" << std::endl;
	std::cout << "1: Travel" << std::endl;
	std::cout << "2: Shop" << std::endl;
	std::cout << "3: Level Up" << std::endl;
	std::cout << "4: Rest" << std::endl;
	std::cout << "5: Character sheet" << std::endl;
	std::cout << "6: Create new character" << std::endl;
	std::cout << "7: Save characters" << std::endl;
	std::cout << "8: Load characters" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl << "Choice: ";
	std::cin >> choice;
	std::cout << std::endl;

	switch(choice)
	{
	case 0:
		playing = false;
		break;

	case 1:

		Traveling();
		break;

	case 3:
		character[activeCharacter].levelUp();
		break;
	case 5:
		character[activeCharacter].printStats();
		break;

	case 6:
		std::cin.ignore();
		createNewCharacter();
		saveCharacter();
		break;

	case 7:
		saveCharacter();
		break;
	
	default:
			break;
	}
}



void Game::createNewCharacter()
{
	std::string name;
	cout << "Enter your name... ";
	getline(std::cin, name);

	character.push_back(Character());
	activeCharacter = character.size() - 1;
	character[activeCharacter].initialize(name);
}

void Game::saveCharacter()
{
	std::ofstream outFile(fileName);

	if (outFile.is_open())
	{
		for (size_t i = 0; i < character.size(); i++)
		{
			outFile << character[i].getAsString() << "\n";
		}
	}

	outFile.close();
}

void Game::Traveling()
{
	Travel travel;

	travel.generateEvent(this->character[activeCharacter]);
}

bool Game::getPlaying() const{ return this->playing; }