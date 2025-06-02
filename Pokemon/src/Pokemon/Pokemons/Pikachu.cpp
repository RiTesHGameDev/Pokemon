#include <iostream>
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Utilities/Utilities.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
using namespace N_Utilities;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pikachu::Pikachu() :Pokemon("Pikachu", PokemonType::Electric, 100, 25, { Move("Thunder Shock",25),Move("QUICK ATTACK", 10),Move("Thunder Bolt",80) }) {}

		void Pikachu::attack(Move selectedMove,Pokemon* target) 
		{
			
			if(selectedMove.name == "Thunder Bolt")
			{
				int HitChance = rand() % 100;

				if (HitChance <= 40)

					Pokemon::attack(selectedMove, target);
				
					cout << name << " striked again with a second Hit " << selectedMove.name << endl;
			}
			else
				cout << target->getName() << " dodged the second hit" << endl;

			if (selectedMove.name == "Thunder Shock")

			{

				if (target->canApplyEffect())

					target->applyEffect(StatusEffectType::PARALYZED);

			}
		}
	}
}