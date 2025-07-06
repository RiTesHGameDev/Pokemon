#include <iostream>
#include <string>
#include "../../../include/Pokemon/IStatusEffect.hpp"
#include "../../../include/Pokemon/StatusEffect/Burn.hpp"

using namespace std;

namespace N_Pokemon {
	namespace N_StatusEffect {

		void Burn::applyEffect(N_Pokemon::Pokemon* target) {
			cout << target->getName() << " is burned! Its attack is weakened." << endl;
			turnLeft = rand() % 3 + 1;
		}

		string Burn::getEffectName() const {
			return "Burned";
		}

		bool Burn::turnEndEffect(N_Pokemon::Pokemon* target) {
			if (turnLeft <= 0) {
				clearEffect(target);
				cout << target->getName() << "'s attack is back to normal now." << endl;
				return true;
			}
			turnLeft--;

			int burn_chance = rand() % 4;

			if (burn_chance == 0) {
				cout << target->getName() << " is still burned!" << endl;
				return false;
			}
			else {
				cout << target->getName() << "'s attack is continuing to weaken." << endl;
				target->reduceAttackPower(8);
				cout << target->getName() << "'s attack power is reduced by 8." << endl;
				return true;
			}
		}

		void Burn::clearEffect(N_Pokemon::Pokemon* target) {
			cout << target->getName() << " is no longer burned!" << endl;
			target->clearEffect();
		}
	}
}