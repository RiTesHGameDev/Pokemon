#include <iostream>
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemons/Caterpie.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonType.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Utilities/Utilities.hpp"
using namespace N_Utilities;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Caterpie::Caterpie() :Pokemon("Caterpie", PokemonType::Electric, 100, 25) {}

		void Caterpie::bugBite(Pokemon* target)
		{
			cout << name << " uses Bug Bite on" << target->getName() << endl;

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
		void Caterpie::attack(Pokemon* target) {
			bugBite(target);
		}
	}
}