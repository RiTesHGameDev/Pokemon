#include <iostream>
#include "../../../include/Pokemon/Pokemons/Pidgey.hpp"
#include "../../../include/Utilities/Utilities.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
#include "../../../include/Battle/BattleManager.hpp"
using namespace N_Utilities;
using namespace N_Battle;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pidgey::Pidgey() :Pokemon("Pidgey", PokemonType::Normal, 100, 35, { Move("Wind Attack", 35), Move("Gust", 100) }) {}

		void Pidgey::attack(Move selectedMove, Pokemon* target)
		{

			if (selectedMove.name == "Gust")
			{
				int hitChance = rand() % 100;

				if (hitChance <= 30)
				{
					cout << "It blew up the enemy away! " << endl;

					target->setHealth(0);

					Utilities::waitForEnter();
				}
				else
					cout << target->getName() << " dodged the second hit" << endl;

			}
			if (selectedMove.name == "Wind Attack")
			{
				Pokemon::attack(selectedMove, target);

				if (target->canApplyEffect())

					target->applyEffect(StatusEffectType::SLEEPING);

			}
		}

	}
}