#include <iostream>
#include "../../../include/Pokemon/Pokemons/Zubat.hpp"
#include "../../../include/Utilities/Utilities.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include "../../../include/Pokemon/Move.hpp"
using namespace N_Utilities;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Zubat::Zubat() :Pokemon("Zubat", PokemonType::Earth, 100, 20, { Move("Super Sonic", 20),Move("Leech Life",10) }) {}

		void Zubat::attack(Move selectedMove,Pokemon* target) 
		{
			Pokemon::attack(selectedMove,target);

			if (selectedMove.name == "Leech Life") 
			{
				int healthRecovery = static_cast<int>(selectedMove.power * 0.6f);
				this->health += healthRecovery;

				if (health > this->maxHealth)
					this->health = this->maxHealth;

				if (target->canApplyEffect())

					target->applyEffect(StatusEffectType::POISONED);

				cout << healthRecovery << " HP regained !" << endl;
			}
		}
	}
}