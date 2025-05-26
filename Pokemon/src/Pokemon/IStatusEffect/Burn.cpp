#include <iostream>
#include "../../../include/Pokemon/StatusEffect/Burn.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
#include "../../../include/Pokemon/StatusEffect/IStatusEffect.hpp"

namespace N_Pokemon
{
	namespace N_StatusEffect
	{
		void Burn::applyEffect(Pokemon* target)
		{
			cout << target->getName() << " is Burned ! It's Attack is Weakened." << endl;
			turnLeft = rand() % 3 + 1;
		}
		string Burn::getEffectName()
		{
			return "Burned";
		}
		bool Burn::turnEndEffect(Pokemon* target)
		{
			if (turnLeft <= 0) {
				Burn::clearEffect(target);
				cout << target->getName() << "'s Attack is Back to normal now." << endl;
				return true;
			}
			turnLeft--;

			int Burn_chance = rand() % 4;

			if (Burn_chance == 0) {
				cout << target->getName() << " is still Burned !" << endl;
				return false;
			}
			else
			{
				cout << target->getName() << "'s Attack is now stoped Weakining." << endl;
				return true;
			}
		}
		void Burn::clearEffect(Pokemon* target)
		{
			cout << target->getName() << " is not longer Burned !" << endl;
			target->clearEffect();
		}
	}
}