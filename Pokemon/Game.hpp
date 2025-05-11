#pragma once
#include "Grass.hpp"
using namespace std;

class Player;


class Game 
{
	bool keepPlaying = true;
	int choice;

	private:
	Grass forestGrass;

	public:
		Game();
		void gameLoop(Player& player);

};