#pragma once
#include "Grass.hpp"
#include <vector>
using namespace std;

class WildEncounterManager {
public:
	WildPokemon getRandomPokemonFromGrass(const Grass & grass);
};