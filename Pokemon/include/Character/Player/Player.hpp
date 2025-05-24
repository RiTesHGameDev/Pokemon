#pragma once
#include <string>
#include "../../../include/Pokemon/Pokemon.hpp"
using namespace N_Pokemon;

namespace N_Player 
{
    class Player
    {
        //PROP0PERTIES OR ATTRIBUTES
        public:
        string name;
        Pokemon * chosenPokemon;

        Player(); //DEFAULT CONTRUCTOR
        Player(string p_name);
        void choosePokemon(int choice);
    };
}
