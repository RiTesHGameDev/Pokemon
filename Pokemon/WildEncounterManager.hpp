#pragma once
#include "Grass.hpp"
#include <vector>
using namespace std;

class WildEncounterManager 
{
	public:
		WildEncounterManager();
		Pokemon getRandomPokemonFromGrass(const Grass& grass);
};	