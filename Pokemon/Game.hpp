#pragma once
using namespace std;

class Player;
class Game 
{
	bool keepPlaying = true;
	int choice;

	public:
		//Game();
		void gameLoop(Player& player);

};