#pragma once
#include <cstdlib>
#include <ctime>
#include "WildEncounterManager.hpp"
using namespace std;

WildEncounterManager::WildEncounterManager()
{
	srand(time_t(0));
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass)
{
	int randomIndex = rand() % grass.wildPokemonList.size();
	return grass.wildPokemonList[randomIndex];
}