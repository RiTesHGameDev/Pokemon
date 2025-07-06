#include <iostream>
#include "../../../include/Pokemon/Pokemons/Caterpie.hpp"
#include "../../../include/Utilities/Utilities.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
using namespace N_Utilities;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Caterpie::Caterpie() :Pokemon("Caterpie", PokemonType::Bug, 100, 25,{Move("Bug Bite",25,25),Move("Sticky Web",10,10)}) {}

		void Caterpie::attack(Move selectedMove, Pokemon* target)
		{
			if (selectedMove.name == "Sticky Web")
			{
				Pokemon::attack(selectedMove, target);

				//int reducedDamage = 15;

				target->reduceAttackPower(5);

				cout << target->getName() << "'s next attack will be reduced by " << "5 damage!" << endl;
			}
			if (selectedMove.name == "Bug Bite")
			{
				Pokemon::attack(selectedMove, target);

				if (target->canApplyEffect())

					target->applyEffect(StatusEffectType::PARALYZED);
			}
		}
	}
}