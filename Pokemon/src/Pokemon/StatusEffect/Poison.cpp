#include <iostream>
#include <string>
#include "../../../include/Pokemon/StatusEffect/Poison.hpp"
#include "../../../include/Pokemon/IStatusEffect.hpp"

using namespace std;

namespace N_Pokemon {
	namespace N_StatusEffect {

		void Poison::applyEffect(N_Pokemon::Pokemon* target) {
			cout << target->getName() << " is poisoned! Its health is decreasing." << endl;
			turnLeft = rand() % 3 + 1;
		}

		string Poison::getEffectName() const {
			return "Poisoned";
		}

		bool Poison::turnEndEffect(N_Pokemon::Pokemon* target) {
			if (turnLeft <= 0) {
				clearEffect(target);
				cout << target->getName() << "'s health is stable now." << endl;
				return true;
			}
			turnLeft--;

			int poison_chance = rand() % 4;

			if (poison_chance == 0) {
				cout << target->getName() << " is still poisoned!" << endl;
				return false;
			}
			else {
				cout << target->getName() << "'s health has stopped decreasing." << endl;
				return true;
			}
		}

		void Poison::clearEffect(N_Pokemon::Pokemon* target) {
			cout << target->getName() << " is no longer poisoned!" << endl;
			target->clearEffect();
		}
	}
}