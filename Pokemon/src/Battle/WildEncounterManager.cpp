#pragma once
#include <cstdlib>
#include <ctime>
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Battle/WildEncounterManager.hpp"
using namespace std;

WildEncounterManager::WildEncounterManager()
{
	srand(time(0));
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass( const Grass& grass)
{
	int randomIndex = rand() % grass.wildPokemonList.size();
	return grass.wildPokemonList[randomIndex];
}