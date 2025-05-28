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
		Caterpie::Caterpie() :Pokemon("Caterpie", PokemonType::Electric, 100, 25, { Move("Bug Bite",25),Move("Sticky Web",10) }) {}

		void Caterpie::attack(Move selectedMove, Pokemon* target)
		{
			Pokemon::attack(selectedMove, target);

			if (selectedMove.name == "Sticky Web")
			{
				int reducedDamage = 5;

				target->setAttackPower(getAttackPower() - reducedDamage);

				cout << target->getName() << "'s next attack will be reduced by " << reducedDamage << " damage!" << endl;
			}
			if (selectedMove.name == "Bug bite")

			{

				if (target->canApplyEffect())

					target->applyEffect(StatusEffectType::PARALYZED);

			}
		}
	}
}