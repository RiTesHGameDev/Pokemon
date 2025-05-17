#include <iostream>
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemons/Caterpie.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonType.hpp"
using namespace N_Pokemons;
using namespace N_Pokemon;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Caterpie::Caterpie() :Pokemon("Caterpie", PokemonType::Electric, 100, 25) {}

		void Caterpie::bugBite(Pokemon& target)
		{
			cout << name << " uses Bug Bite on" << target.name << endl;
			target.takeDamage(25);
		}
	}
}