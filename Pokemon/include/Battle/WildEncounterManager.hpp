#pragma once
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Grass.hpp"
#include <vector>
using namespace std;

class WildEncounterManager 
{
	public:
		WildEncounterManager();
		Pokemon getRandomPokemonFromGrass(const Grass& grass);
};	