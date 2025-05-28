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
			Pokemon::attack(selectedMove,target);

			if(selectedMove.name == "Blazing Charge") 
			{
				this->takeDamage(10);

				cout << name << " takes 10 recoil damage from the Blazing Charge!" << endl;

				N_Utilities::Utilities::waitForEnter();
			}
			if (selectedMove.name == "Flame Brust")

			{

				if (target->canApplyEffect())

					target->applyEffect(StatusEffectType::BURNED);

			}
		}
	}
}