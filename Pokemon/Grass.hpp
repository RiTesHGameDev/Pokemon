#pragma once
#include <string>
#include <vector>
#include "Pokemon.hpp"
using namespace std;

struct Grass
{
public:
	string environmentType;
	vector<Pokemon>wildPokemonList;
	int encounterRate;
};