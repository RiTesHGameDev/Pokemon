#pragma once
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemon.hpp"
using namespace N_Pokemon;

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