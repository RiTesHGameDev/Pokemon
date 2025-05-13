#pragma once
#include "Grass.hpp"
#include <vector>
using namespace std;

class Player;


class Game 
{
	bool keepPlaying = true;
	int choice;

	private:
	Grass forestGrass;
	Grass caveGrass;

	public:
		Game();
		void gameLoop(Player& player);
		
};