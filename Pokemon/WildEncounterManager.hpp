#pragma once
#include "Grass.hpp"
#include <vector>

class WildEncounterManager {
public:
	WildPokemon getRandomPokemonFromGrass(const Grass & grass);
};