#pragma once
#include "PokemonType.h"
#include "PokemonChoice.h"
#include "Utility.h"
#include <string>
using namespace std;

class Player
{
    //PROP0PERTIES OR ATTRIBUTES
    public:
        string name;
        Pokemon chosenPokemon;

        Player() {} //DEFAULT CONTRUCTOR
        Player(string p_name, Pokemon p_chosenPokemon) {}
        void choosePokemon(int choice) {}
}