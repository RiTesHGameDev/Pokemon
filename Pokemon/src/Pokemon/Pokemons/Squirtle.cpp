#include <iostream>
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemons/Squirtle.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonType.hpp"
using namespace N_Pokemon;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Squirtle::Squirtle() :Pokemon("Squirtle", PokemonType::Water, 100, 35) {}

		void Squirtle::WaterSplash(Pokemon& target)
		{
			cout << name << " uses Water Splash on" << target.getName() << endl;
			target.takeDamage(20);
		}
		void Squirtle::attack(Pokemon* target) {
			WaterSplash(*target);
		}
	}
}