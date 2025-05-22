#include <iostream>
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/Pokemons/Pikachu.hpp"
#include "/Users/ritzr/OneDrive/Documents/GitHub/Pokemon/Pokemon/include/Pokemon/PokemonType.hpp"

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pikachu::Pikachu() :Pokemon("Pikachu", PokemonType::Electric, 100, 15) {}

		void Pikachu::thunderShock(Pokemon* target)
		{
			cout << name << " uses Thunder Shock on" << target->getName() << endl;

			N_Utilities::Utilities::waitForEnter;

			cout << "...\n";

			N_Utilities::Utilities::waitForEnter;

			target->takeDamage(attackPower);

			if (target->isFainted())
				cout << target->getName() << " fainted!\n";
			else
				cout << target->getName() << " has " << target->getHealth() << " HP left.\n";
		}
		void Pikachu::attack(Pokemon* target) {
			thunderShock(target);
		}
	}
}