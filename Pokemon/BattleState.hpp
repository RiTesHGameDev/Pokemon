#pragma once
#include "Pokemon.hpp"
struct BattaleState
{
	Pokemon* playerPokemon;
	Pokemon* wildPokemon;
	bool playerTurn;
	bool battleOnGoing;
};