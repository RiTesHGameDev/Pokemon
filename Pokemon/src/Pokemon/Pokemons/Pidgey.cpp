#include <iostream>
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemons/Pidgey.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonType.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Utilities/Utilities.hpp"
using namespace N_Utilities;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pidgey::Pidgey() :Pokemon("Pidgey", PokemonType::Normal, 100, 35) {}

		void Pidgey::wingAttack(Pokemon* target)
		{
			cout << name << " uses Wing Attack on" << target->getName() << endl;

			N_Utilities::Utilities::waitForEnter();

			cout << "...\n";

			N_Utilities::Utilities::waitForEnter();

			target->takeDamage(attackPower);

			if (target->isFainted())
				cout << target->getName() << " fainted!" << endl;
			else
				cout << target->getName() << " has " << target->getHealth() << " HP left." << endl;
		}
		void Pidgey::attack(Pokemon* target) {
			wingAttack(target);
		}
	}
}