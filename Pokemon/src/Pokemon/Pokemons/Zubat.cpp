#include <iostream>
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemons/Zubat.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonType.hpp"
using namespace N_Pokemons;
using namespace N_Pokemon;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Zubat::Zubat() :Pokemon("Zubat", PokemonType::Electric, 100, 20) {}

		void Zubat::supersonic(Pokemon& target)
		{
			cout << name << " uses Supersonic on" << target.name << endl;
			target.takeDamage(20);
		}
	}
}