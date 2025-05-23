#include <iostream>
#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Utilities/Utilities.hpp"
using namespace N_Utilities;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Squirtle::Squirtle() :Pokemon("Squirtle", PokemonType::Water, 100, 35) {}

		void Squirtle::WaterSplash(Pokemon* target)
		{
			cout << name << " uses Water Splash on" << target->getName() << endl;

			N_Utilities::Utilities::waitForEnter();

			cout << "...\n";

			N_Utilities::Utilities::waitForEnter();

			target->takeDamage(attackPower);

			if(target->isFainted())
			{
				cout << target->getName() << " fainted" << endl;
			}
			else
			{
				cout << target->getName() << " has" << target->getHealth() << "HP left" << endl;
			}
		}
		void Squirtle::attack(Pokemon* target) 
		{
			WaterSplash(target);
		}
	}
}