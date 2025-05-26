#include <iostream>
#include "../../../include/Pokemon/StatusEffect/Poison.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/StatusEffect/IStatusEffect.hpp"

namespace N_Pokemon
{
	namespace N_StatusEffect
	{
		void Poison::applyEffect(Pokemon* target)
		{
			cout << target->getName() << " is poisoned ! It's Health is decreasing." << endl;
			turnLeft = rand() % 3 + 1;
		}
		string Poison::getEffectName()
		{
			return "Poisoned";
		}
		bool Poison::turnEndEffect(Pokemon* target)
		{
			if (turnLeft <= 0) {
				Poison::clearEffect(target);
				cout << target->getName() << "'s health is stable now." << endl;
				return true;
			}
			turnLeft--;

			int poison_chance = rand() % 4;

			if (poison_chance == 0) {
				cout << target->getName() << " is still Poisoned !" << endl;
				return false;
			}
			else
			{
				cout << target->getName() << "'s health is now stoped decreasing." << endl;
				return true;
			}
		}
		void Poison::clearEffect(Pokemon* target)
		{
			cout << target->getName() << " is not longer Poisoned !" << endl;
			target->clearEffect();
		}
	}
}