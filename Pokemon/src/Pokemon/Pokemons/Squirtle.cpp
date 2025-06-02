#include <iostream>
#include "../../../include/Pokemon/Pokemons/Squirtle.hpp"
#include "../../../include/Utilities/Utilities.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
using namespace N_Utilities;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Squirtle::Squirtle() :Pokemon("Squirtle", PokemonType::Water, 100, 35, { Move("Water Splash", 35,35), Move("Rapid Spin", 5,5) }) {}

		void Squirtle::attack(Move selectedMove,Pokemon* target) 
		{
			if (selectedMove.name == "Rapid Spin") 
			{
				int randomNumber = (rand() % 4) + 2;

				for(int i = 0 ; i < randomNumber ; ++i)
				{
					Pokemon::attack(selectedMove, target);
				}
				cout << "Zubat hit the opponent with " << randomNumber << " times !" << endl;
			}
			if (selectedMove.name == "Water Splash")
			{
				Pokemon::attack(selectedMove, target);

				if (target->canApplyEffect())

					target->applyEffect(StatusEffectType::SLEEPING);

			}
		}
	}
}