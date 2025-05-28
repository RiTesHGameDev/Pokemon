#include <iostream>
#include <string>
#include "../../../include/Pokemon/StatusEffect/Sleep.hpp"
#include "../../../include/Pokemon/IStatusEffect.hpp"

using namespace std;

namespace N_Pokemon {
	namespace N_StatusEffect {

		void Sleep::applyEffect(N_Pokemon::Pokemon* target) {
			cout << target->getName() << " is Sleeping! It cannot move now." << endl;
			turnLeft = rand() % 3 + 1;
		}

		string Sleep::getEffectName() const {
			return "Sleeping";
		}

		bool Sleep::turnEndEffect(N_Pokemon::Pokemon* target) {
			if (turnLeft <= 0) {
				clearEffect(target);
				cout << target->getName() << " has woken up!" << endl;
				return true;
			}
			turnLeft--;

			int Sleep_chance = rand() % 4;

			if (Sleep_chance == 0) {
				cout << target->getName() << " is still Sleeping!" << endl;
				return false;
			}
			else {
				cout << target->getName() << " woke up and can move now." << endl;
				return true;
			}
		}

		void Sleep::clearEffect(N_Pokemon::Pokemon* target) {
			cout << target->getName() << " is no longer Sleeping!" << endl;
			target->clearEffect();
		}
	}
}