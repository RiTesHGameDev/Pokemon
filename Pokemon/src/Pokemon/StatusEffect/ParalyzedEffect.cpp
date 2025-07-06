#include <iostream>
#include <string>
#include "../../../include/Pokemon/StatusEffect/ParalyzedEffect.hpp"
#include "../../../include/Pokemon/IStatusEffect.hpp"
#include "../../../include/Pokemon/Pokemon.hpp"
namespace N_Pokemon 
{
	namespace N_StatusEffect 
	{
		void ParalyzedEffect::applyEffect(Pokemon* target) 
		{
			cout << target->getName() << " is paralyzed ! It may not be able to move now." << endl;
			turnLeft = rand() % 3 + 1;
		}
		string ParalyzedEffect::getEffectName() const
		{
			return "Paralyzed";
		}
		bool ParalyzedEffect::turnEndEffect(Pokemon* target) 
		{
			if (turnLeft <= 0) {
				ParalyzedEffect::clearEffect(target);
				cout << target->getName() << " can move now " << endl;
				return true;
			}
			turnLeft--;

			int paralysis_chance = rand() % 4;

			if (paralysis_chance == 0) {
				cout << target->getName() << " is still paralyzed !" << endl;
				return false;
			}
			else 
			{
				cout << target->getName() << " shakes off the paralysis momentarilly and can move." << endl;
				return true;
			}
		}
		void ParalyzedEffect::clearEffect(Pokemon* target) 
		{
			cout << target->getName() << " is not longer paralyzed !" << endl;
			target->clearEffect();
		}
	}
}