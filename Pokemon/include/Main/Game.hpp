#pragma once
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Grass.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Character/Player/Player.hpp"
#include <vector>
using namespace N_Player;
using namespace N_Pokemon;

//class Player;

namespace N_Main 
{
	class Game
	{
		bool keepPlaying = true;
		int choice;

	private:
		Grass forestGrass;
		Pokemon* wildPokemon;

	public:
		Game();
		~Game();
		void gameLoop(Player* player);
		void visitPokeCentre(Player* player);
	};
}
