#include <iostream>
#include "../../../include/Pokemon/Pokemons/Charmander.hpp"
#include "../../../include/Utilities/Utilities.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
using namespace N_Utilities;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Charmander::Charmander() :Pokemon("Charmander", PokemonType::Fire, 100, 35, { Move("Flame Brust", 35),Move("Blazing Charge",70) }) {}

		void Charmander::attack(Move selectedMove,Pokemon* target) 
		{
			if(selectedMove.name == "Blazing Charge") 
			{
				this->takeDamage(10);

				cout << name << " takes 10 recoil damage from the Blazing Charge!" << endl;

				int HitChance = rand() % 100;

				if (HitChance <= 40) {
					Pokemon::attack(selectedMove, target);
				}
				else 
					cout << "... but it missed!\n";

				N_Utilities::Utilities::waitForEnter();
				
				
			}
			if (selectedMove.name == "Flame Brust")

			{
				Pokemon::attack(selectedMove, target);

				if (target->canApplyEffect())

					target->applyEffect(StatusEffectType::BURNED);

			}
		}
	}
}