#pragma once
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemon.hpp"

namespace N_Battle 
{
	struct BattaleState
	{
		Pokemon* playerPokemon;
		Pokemon* wildPokemon;
		bool playerTurn;
		bool battleOnGoing;
	};
}