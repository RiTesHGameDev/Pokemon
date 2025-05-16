#pragma once
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemon.hpp"
struct BattaleState
{
	Pokemon* playerPokemon;
	Pokemon* wildPokemon;
	bool playerTurn;
	bool battleOnGoing;
};