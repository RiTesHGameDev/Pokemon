#include <iostream>
#include "../../../include/Pokemon/Pokemons/Balbasaur.hpp"
#include "../../../include/Utilities/Utilities.hpp"
using namespace N_Utilities;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Balbasaur::Balbasaur() :Pokemon("Balbasaur", PokemonType::Grass, 100, 35) {}

		void Balbasaur::vineWhip(Pokemon* target)
		{
			cout << name << " uses Vine Whip on" << target->getName() << endl;

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
		void Balbasaur::attack(Pokemon* target) 
		{
			vineWhip(target);
		}
	}
}