#include <iostream>
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Utilities/Utilities.hpp"
using namespace N_Utilities;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Charmander::Charmander() :Pokemon("Charmander", PokemonType::Fire, 100, 35) {}

		void Charmander::flameBrust(Pokemon* target)
		{
			cout << name << " uses Flame Thrower on" << target->getName() << endl;

			N_Utilities::Utilities::waitForEnter();

			cout << "...\n";

			N_Utilities::Utilities::waitForEnter();

			target->takeDamage(attackPower);

			if (target->isFainted())
			{
				cout << target->getName() << " fainted!" << endl;
			}
			else
			{
				cout << target->getName() << " has " << target->getHealth() << " HP left." << endl;
			}
		}
		void Charmander::attack(Pokemon* target) 
		{
			flameBrust(target);
		}
	}
}