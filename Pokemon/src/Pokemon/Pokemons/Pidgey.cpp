#include <iostream>
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemons/Pidgey.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonType.hpp"
using namespace N_Pokemon;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pidgey::Pidgey() :Pokemon("Pidgey", PokemonType::Normal, 100, 35) {}

		void Pidgey::wingAttack(Pokemon& target)
		{
			cout << name << " uses Wing Attack on" << target.getName() << endl;
			target.takeDamage(20);
		}
	}
}