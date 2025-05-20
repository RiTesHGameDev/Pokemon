#include <iostream>
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemons/Balbasaur.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonType.hpp"
using namespace N_Pokemon;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Balbasaur::Balbasaur() :Pokemon("Balbasaur", PokemonType::Grass, 100, 35) {}

		void Balbasaur::vineWhip(Pokemon& target)
		{
			cout << name << " uses Vine Whip on" << target.getName() << endl;
			target.takeDamage(20);
		}
		void Balbasaur::attack(Pokemon* target) {
			vineWhip(*target);
		}
	}
}