#include <iostream>
#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Utilities/Utilities.hpp"
using namespace N_Utilities;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Zubat::Zubat() :Pokemon("Zubat", PokemonType::Electric, 100, 20) {}

		void Zubat::supersonic(Pokemon* target)
		{
			cout << name << " uses Supersonic on" << target->getName() << endl;

			N_Utilities::Utilities::waitForEnter();

			cout << "...\n";

			N_Utilities::Utilities::waitForEnter();

			target->takeDamage(attackPower);

			if (target->isFainted())
			{
				cout << target->getName() << " fainted" << endl;
			}
			else
			{
				cout << target->getName() << " has" << target->getHealth() << "HP left" << endl;
			}
		}
		void Zubat::attack(Pokemon* target) {
			supersonic(target);
		}
	}
}